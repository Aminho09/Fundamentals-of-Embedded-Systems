#include <Arduino.h>

#include <Arduino_FreeRTOS.h>
#include <queue.h>


int sensorsArray[2] = {0, 0};

int l_debug_flag = 0;
int f_debug_flag = 0;


void ReadPhotoresistor( void *pvParameters );
void ReadFlexSensor( void *pvParameters );
void MotorDirection( void *pvParameters );
void DebugPhotoresistor( void *pvParameters );
void DebugFlexSensor( void *pvParameters );

QueueHandle_t sensors_q;

QueueHandle_t debug_degree_qh;
QueueHandle_t debug_light_qh;

void setup() {

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  sensors_q = xQueueCreate(10, //Queue length
                      sizeof(int)); //Queue item size

  debug_degree_qh = xQueueCreate(10, //Queue length
                        sizeof(int)); //Queue item size

  debug_light_qh = xQueueCreate(10, //Queue length
                        sizeof(int)); //Queue item size


  if (sensors_q != NULL && debug_degree_qh != NULL && debug_light_qh != NULL){

    Serial.begin(9600);
    while (!Serial) {
      ;
    }
    
    xTaskCreate(ReadPhotoresistor, "ReadPhotoresistor", 128, NULL, 1, NULL);
    xTaskCreate(ReadFlexSensor, "ReadFlexSensor", 128, NULL, 1, NULL);
    xTaskCreate(MotorDirection, "MotorDirection", 128, NULL, 2, NULL);
    xTaskCreate(DebugPhotoresistor, "DebugPhotoresistor", 128, NULL, 2, NULL);
    xTaskCreate(DebugFlexSensor, "DebugFlexSensor", 128, NULL, 2, NULL);

  }
}

void loop() {}

void ReadPhotoresistor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int readA0 = map(analogRead(A0), 10, 975, 10, 100);
    sensorsArray[0] = readA0;

    if (l_debug_flag == 1)
      xQueueSend(debug_light_qh, &readA0, portMAX_DELAY);
    
    xQueueSend(sensors_q, &sensorsArray, portMAX_DELAY);

    taskYIELD();
  }
}

void ReadFlexSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int readA1 = map(analogRead(A1), 0, 1019, 180, 0);
    sensorsArray[1] = readA1;

    if (f_debug_flag == 1)
      xQueueSend(debug_degree_qh, &readA1, portMAX_DELAY);
    
    xQueueSend(sensors_q, &sensorsArray, portMAX_DELAY);

    taskYIELD();
  }
}

void MotorDirection(void *pvParameters){
  (void) pvParameters;
  
  for(;;){

    if (xQueueReceive(sensors_q, &sensorsArray, portMAX_DELAY) == pdPASS){

      int light  = sensorsArray[0];
      int degree = sensorsArray[1];

      if(degree > 10 && degree < 80){
        
        if(light < 45){
            
          digitalWrite(2, LOW); 
          digitalWrite(3, HIGH);  
          
        }else if(light > 56){
            
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);

        }else{
          digitalWrite(2, LOW);  
          digitalWrite(3, LOW); 
        }
        
        
      }else{

        digitalWrite(2, LOW);  
        digitalWrite(3, LOW); 
      }
    }
    
  }
}

void DebugPhotoresistor(void *pvParameters){
  (void) pvParameters;

  int A0Read = 0;

  for(;;){
    if (xQueueReceive(debug_light_qh, &A0Read, portMAX_DELAY) == pdPASS){
      Serial.println(A0Read);
    }
  }
}


void DebugFlexSensor(void *pvParameters){
  (void) pvParameters;

  int A1Read = 0;

  for(;;){
    
    if (xQueueReceive(debug_degree_qh, &A1Read, portMAX_DELAY) == pdPASS){
      Serial.println(A1Read);
    }
    
  }

}