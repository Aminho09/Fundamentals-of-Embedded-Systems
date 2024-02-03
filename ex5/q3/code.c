/*
 * File: awning_chart.c
 *
 * Code generated for Simulink model 'awning_chart'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Wed Dec  6 17:18:45 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

/*
 * File: awning_chart.h
 *
 * Code generated for Simulink model 'awning_chart'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Wed Dec  6 17:18:45 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_awning_chart_h_
#define RTW_HEADER_awning_chart_h_
#ifndef awning_chart_COMMON_INCLUDES_
#define awning_chart_COMMON_INCLUDES_
/*
 * File: rtwtypes.h
 *
 * Code generated for Simulink model 'awning_chart'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Wed Dec  6 17:18:45 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Intel->x86-64 (Windows64)
 *   Number of bits:     char:   8    short:   16    int:  32
 *                       long:  32
 *                       native word size:  64
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef short int16_T;
typedef unsigned short uint16_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T.                        *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;

#define CINT8_T

typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;

#define CUINT8_T

typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;

#define CINT16_T

typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;

#define CUINT16_T

typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;

#define CINT32_T

typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;

#define CUINT32_T

typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647))
#define MIN_int32_T                    ((int32_T)(-2147483647-1))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFU))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
#endif                                 /* awning_chart_COMMON_INCLUDES_ */

/*
 * File: awning_chart_types.h
 *
 * Code generated for Simulink model 'awning_chart'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Wed Dec  6 17:18:45 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_awning_chart_types_h_
#define RTW_HEADER_awning_chart_types_h_

/* Model Code Variants */

/* Forward declaration for rtModel */
typedef struct tag_RTM_awning_chart_T RT_MODEL_awning_chart_T;

#endif                                 /* RTW_HEADER_awning_chart_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_awning_chart;   /* '<Root>/Chart' */
  uint8_T is_c3_awning_chart;          /* '<Root>/Chart' */
} DW_awning_chart_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T light;                        /* '<Root>/light' */
  real_T flex;                         /* '<Root>/flex' */
} ExtU_awning_chart_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T motor;                        /* '<Root>/motor' */
} ExtY_awning_chart_T;

/* Real-time Model Data Structure */
struct tag_RTM_awning_chart_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_awning_chart_T awning_chart_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_awning_chart_T awning_chart_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_awning_chart_T awning_chart_Y;

/* Model entry point functions */
extern void awning_chart_initialize(void);
extern void awning_chart_step(void);
extern void awning_chart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_awning_chart_T *const awning_chart_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'awning_chart'
 * '<S1>'   : 'awning_chart/Chart'
 */
#endif                                 /* RTW_HEADER_awning_chart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
//#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart' */
#define awning_chart_IN_Closing        ((uint8_T)1U)
#define awning_chart_IN_Off            ((uint8_T)2U)
#define awning_chart_IN_Opening        ((uint8_T)3U)

/* Block states (default storage) */
DW_awning_chart_T awning_chart_DW;

/* External inputs (root inport signals with default storage) */
ExtU_awning_chart_T awning_chart_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_awning_chart_T awning_chart_Y;

/* Real-time model */
static RT_MODEL_awning_chart_T awning_chart_M_;
RT_MODEL_awning_chart_T *const awning_chart_M = &awning_chart_M_;

/* Model step function */
void awning_chart_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/flex'
   *  Inport: '<Root>/light'
   */
  if (awning_chart_DW.is_active_c3_awning_chart == 0U) {
    awning_chart_DW.is_active_c3_awning_chart = 1U;
    awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Off;
  } else {
    switch (awning_chart_DW.is_c3_awning_chart) {
     case awning_chart_IN_Closing:
      if (((awning_chart_U.light >= 45.0) && (awning_chart_U.light <= 55.0)) ||
          (awning_chart_U.flex <= 10.0) || (awning_chart_U.flex >= 80.0)) {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = 0.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Off;
      } else if ((awning_chart_U.light < 45.0) && (awning_chart_U.flex > 10.0) &&
                 (awning_chart_U.flex < 80.0)) {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = 1.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Opening;
      } else {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = -1.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Closing;
      }
      break;

     case awning_chart_IN_Off:
      if ((awning_chart_U.light < 45.0) && (awning_chart_U.flex > 10.0) &&
          (awning_chart_U.flex < 80.0)) {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = 1.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Opening;
      } else if ((awning_chart_U.light > 55.0) && (awning_chart_U.flex > 10.0) &&
                 (awning_chart_U.flex < 80.0)) {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = -1.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Closing;
      } else {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = 0.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Off;
      }
      break;

     default:
      /* case IN_Opening: */
      if (((awning_chart_U.light >= 45.0) && (awning_chart_U.light <= 55.0)) ||
          (awning_chart_U.flex <= 10.0) || (awning_chart_U.flex >= 80.0)) {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = 0.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Off;
      } else if ((awning_chart_U.light > 55.0) && (awning_chart_U.flex > 10.0) &&
                 (awning_chart_U.flex < 80.0)) {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = -1.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Closing;
      } else {
        /* Outport: '<Root>/motor' */
        awning_chart_Y.motor = 1.0;
        awning_chart_DW.is_c3_awning_chart = awning_chart_IN_Opening;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void awning_chart_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void awning_chart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float light = map(analogRead(A0), 0, 1023, 10, 560);
  
  float flex = (map(analogRead(A1), 122, 235, 80, 10));
  
  //Serial.println(map(flex, 105, 201, 80, 10));
  //Serial.println(flex);
  //Serial.println(analogRead(A1));
  
  awning_chart_U.light = light;
  awning_chart_U.flex = flex;
  awning_chart_step();
  
  digitalWrite(3, awning_chart_Y.motor ==  1.0 ? LOW:HIGH);
  digitalWrite(2, awning_chart_Y.motor == -1.0 ? LOW:HIGH);
  delay(500);
}