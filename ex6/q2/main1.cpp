#include <Arduino.h>
#include <Arduino_FreeRTOS.h>

uint8_t light = 0;
uint8_t degree = 0;

int p_debug = 0;
int f_debug = 0;


void ReadPhotoresistor( void *pvParameters );
void ReadFlexSensor( void *pvParameters );
void MotorDirection( void *pvParameters );
void DebugPhotoresistor( void *pvParameters );
void DebugFlexSensor( void *pvParameters );

void setup() {

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  
  xTaskCreate(ReadPhotoresistor, "ReadPhotoresistor", 128, NULL, 1, NULL);
  xTaskCreate(ReadFlexSensor, "ReadFlexSensor", 128, NULL, 1, NULL);
  xTaskCreate(MotorDirection, "MotorDirection", 128, NULL, 1, NULL);
  xTaskCreate(DebugPhotoresistor, "DebugPhotoresistor", 128, NULL, 1, NULL);
  xTaskCreate(DebugFlexSensor, "DebugFlexSensor", 128, NULL, 1, NULL);
  
}

void loop() {}

void ReadPhotoresistor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    light = map(analogRead(A0), 10, 975, 10, 100);
    taskYIELD();
  }
}

void ReadFlexSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    degree = map(analogRead(A1), 0, 1019, 180, 0);
    taskYIELD();
  }
}

void MotorDirection(void *pvParameters){
  (void) pvParameters;

  for(;;){

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

  taskYIELD();

  }
}

void DebugPhotoresistor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    if (f_debug == 1)
      Serial.println(analogRead(A0));
    taskYIELD();
  }
}


void DebugFlexSensor(void *pvParameters){
  (void) pvParameters;


  for(;;){
    if (f_debug == 1)
      Serial.println(analogRead(A1));
    taskYIELD();
  }

}