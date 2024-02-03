#include <Arduino.h>
#pragma GCC push_options
#pragma GCC optimize ("-Os")

/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Thu Jan  4 23:38:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

/*
 * File: rtwtypes.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Thu Jan  4 23:38:07 2024
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
 *   Device type: Atmel->AVR
 *   Number of bits:     char:   8    short:   16    int:  16
 *                       long:  32
 *                       native word size:   8
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
typedef int int16_T;
typedef unsigned int uint16_T;
typedef long int32_T;
typedef unsigned long uint32_T;
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
#define MAX_int32_T                    ((int32_T)(2147483647L))
#define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: untitled.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Thu Jan  4 23:38:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
// #include "rtwtypes.h"
// #include "rtw_continuous.h"
// #include "rtw_solver.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

/* Model Code Variants */
// #include "MW_target_hardware_resources.h"

#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 1
#include "MW_ArduinoHWInit.h"
#include "arduinoAVRScheduler.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE Arduino Mega 2560
#define MW_EXTMODEPROTOCOLINFO_XCPONSERIAL_HOSTINTERFACE Simulink
#define MW_EXTMODEPROTOCOLINFO_XCPONSERIAL_LOGGINGBUFFERAUTO 1
#define MW_EXTMODEPROTOCOLINFO_XCPONSERIAL_LOGGINGBUFFERSIZE 500
#define MW_EXTMODEPROTOCOLINFO_XCPONSERIAL_LOGGINGBUFFERNUM 3
#define MW_EXTMODEPROTOCOLINFO_XCPONSERIAL_MAXCONTIGSAMPLES 10
#define MW_EXTMODEPROTOCOLINFO_XCPONTCPIP_HOSTINTERFACE Simulink
#define MW_EXTMODEPROTOCOLINFO_XCPONTCPIP_LOGGINGBUFFERAUTO 1
#define MW_EXTMODEPROTOCOLINFO_XCPONTCPIP_LOGGINGBUFFERSIZE 500
#define MW_EXTMODEPROTOCOLINFO_XCPONTCPIP_LOGGINGBUFFERNUM 3
#define MW_EXTMODEPROTOCOLINFO_XCPONTCPIP_MAXCONTIGSAMPLES 10
#define MW_EXTMODEPROTOCOLINFO_XCPONWIFI_HOSTINTERFACE Simulink
#define MW_EXTMODEPROTOCOLINFO_XCPONWIFI_LOGGINGBUFFERAUTO 1
#define MW_EXTMODEPROTOCOLINFO_XCPONWIFI_LOGGINGBUFFERSIZE 500
#define MW_EXTMODEPROTOCOLINFO_XCPONWIFI_LOGGINGBUFFERNUM 3
#define MW_EXTMODEPROTOCOLINFO_XCPONWIFI_MAXCONTIGSAMPLES 10
#define MW_CONNECTIONINFO_XCPONSERIAL_BAUDRATE codertarget.arduinobase.registry.getBaudRate
#define MW_CONNECTIONINFO_XCPONSERIAL_COMPORT codertarget.arduinobase.internal.getExternalModeMexArgs('Serial')
#define MW_CONNECTIONINFO_XCPONSERIAL_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONTCPIP_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Ethernet')
#define MW_CONNECTIONINFO_XCPONTCPIP_PORT 17725
#define MW_CONNECTIONINFO_XCPONTCPIP_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONWIFI_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Wifi')
#define MW_CONNECTIONINFO_XCPONWIFI_PORT 17725
#define MW_CONNECTIONINFO_XCPONWIFI_VERBOSE 0
#define MW_CONNECTIONINFO_SERIAL_IPADDRESS codertarget.arduinobase.registry.getLoopbackIP;
#define MW_CONNECTIONINFO_SERIAL_PORT 17725
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 0
#define MW_CONNECTIONINFO_TCPIP_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Ethernet')
#define MW_CONNECTIONINFO_TCPIP_PORT 17725
#define MW_CONNECTIONINFO_TCPIP_VERBOSE 0
#define MW_CONNECTIONINFO_WIFI_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Wifi')
#define MW_CONNECTIONINFO_WIFI_PORT 17725
#define MW_CONNECTIONINFO_WIFI_VERBOSE 0
#define MW_EXTMODE_CONFIGURATION XCP on Serial
#define MW_EXTMODE_COMPORTBAUD 921600
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_RUNTIME_DISABLEPARALLELBUILD 0
#define MW_RUNTIME_FORCEBUILDSTATICLIBRARY 0
#define MW_HOSTBOARDCONNECTION_APPDOWNLOAD_PORT_SOURCE 0
#define MW_HOSTBOARDCONNECTION_APPDOWNLOAD_COMPORT_SELECT -1
#define MW_HOSTBOARDCONNECTION_APPDOWNLOAD_COMPORT_SPECIFY 1
#define MW_HOSTBOARDCONNECTION_APPDOWNLOAD_BAUD 0
#define MW_HOSTBOARDCONNECTION_APPDOWNLOAD_BAUD_SPECIFY 9600
#define MW_HOSTBOARDCONNECTION_CONNECTEDIO_SERIAL_PORT 0
#define MW_HOSTBOARDCONNECTION_CONNECTEDIO_PORT_SOURCE1 0
#define MW_HOSTBOARDCONNECTION_CONNECTEDIO_PORT_SOURCE2 0
#define MW_HOSTBOARDCONNECTION_CONNECTEDIO_COMPORT_SELECT -1
#define MW_HOSTBOARDCONNECTION_CONNECTEDIO_COMPORT_SPECIFY 1
#define MW_HOSTBOARDCONNECTION_CONNECTEDIO_BAUD 0
#define MW_HOSTBOARDCONNECTION_CONNECTEDIO_BAUD_SPECIFY 9600
#define MW_HOSTBOARDCONNECTION_EXTERNALMODE_SERIAL_PORT 0
#define MW_HOSTBOARDCONNECTION_EXTERNALMODE_PORT_SOURCE1 0
#define MW_HOSTBOARDCONNECTION_EXTERNALMODE_PORT_SOURCE2 0
#define MW_HOSTBOARDCONNECTION_EXTERNALMODE_COMPORT_SELECT -1
#define MW_HOSTBOARDCONNECTION_EXTERNALMODE_COMPORT_SPECIFY 1
#define MW_HOSTBOARDCONNECTION_EXTERNALMODE_BAUD -1
#define MW_HOSTBOARDCONNECTION_EXTERNALMODE_BAUD_SPECIFY 9600
#define MW_HOSTBOARDCONNECTION_PIL_SERIAL_PORT 0
#define MW_HOSTBOARDCONNECTION_PIL_PORT_SOURCE1 0
#define MW_HOSTBOARDCONNECTION_PIL_PORT_SOURCE2 0
#define MW_HOSTBOARDCONNECTION_PIL_COMPORT_SELECT -1
#define MW_HOSTBOARDCONNECTION_PIL_COMPORT_SPECIFY 1
#define MW_HOSTBOARDCONNECTION_PIL_BAUD 0
#define MW_HOSTBOARDCONNECTION_PIL_BAUD_SPECIFY 9600
#define MW_CONNECTEDIO_CONNECTEDIOMODE 0
#define MW_CONNECTEDIO_ACTIONONOVERRUN 0
#define MW_OVERRUNDETECTION_ENABLE_OVERRUN_DETECTION 0
#define MW_OVERRUNDETECTION_DIGITAL_OUTPUT_TO_SET_ON_OVERRUN 13
#define MW_ANALOGINREFVOLTAGE_ANALOG_INPUT_REFERENCE_VOLTAGE 0.000000
#define MW_SERIAL_SERIAL0_BAUD_RATE 3
#define MW_SERIAL_SERIAL1_BAUD_RATE 3
#define MW_SERIAL_SERIAL2_BAUD_RATE 3
#define MW_SERIAL_SERIAL3_BAUD_RATE 3
#define MW_I2C_I2C0BUSSPEEDHZ 100000
#define MW_SPI_SPI_CLOCK_OUT_FREQUENCY 1
#define MW_SPI_SPI_MODE 0
#define MW_SPI_SPI_BITORDER 0
#define MW_SPI_SDSLAVESELECT 4.000000
#define MW_SPI_CANCHIPSELECT 9.000000
#define MW_ETHERNET_DISABLE_DHCP_ETHERNET 0
#define MW_ETHERNET_LOCAL_IP_ADDRESS 192.168.0.20
#define MW_ETHERNET_LOCAL_MAC_ADDRESS DE:AD:BE:EF:FE:ED
#define MW_WIFI_WIFI_HARDWARE 0
#define MW_WIFI_DISABLE_DHCP_WIFI 0
#define MW_WIFI_WIFI_IP_ADDRESS 192.168.1.20
#define MW_WIFI_WIFI_SSID yourNetwork
#define MW_WIFI_SET_WIFI_ENCRYPTION 0
#define MW_WIFI_WIFI_WEP_KEY D0D0DEADF00DABBADEAFBEADED
#define MW_WIFI_WIFI_WEP_KEY_INDEX 0
#define MW_WIFI_WIFI_WPA_PASSWORD secretPassword
#define MW_WIFI_WIFI_ESP8266_HW_SERIAL_PORT 0
#define MW_THINGSPEAK_ENABLE_CUSTOMSERVER 48
#define MW_THINGSPEAK_IP_ADDRESS 184.106.153.149
#define MW_THINGSPEAK_PORT 80
#define MW_CAN_CANBUSSPEED 10
#define MW_CAN_CANOSCILLATORFREQUENCY 1
#define MW_CAN_INTERRUPTPIN 2.000000
#define MW_CAN_ALLOWALLFILTER 0
#define MW_CAN_BUFFER0IDTYPE 0
#define MW_CAN_ACCEPTANCEMASK0_NOR 0
#define MW_CAN_ACCEPTANCEFILTER0_NOR 255
#define MW_CAN_ACCEPTANCEFILTER1_NOR 255
#define MW_CAN_ACCEPTANCEMASK0_EXT 0
#define MW_CAN_ACCEPTANCEFILTER0_EXT 255
#define MW_CAN_ACCEPTANCEFILTER1_EXT 255
#define MW_CAN_BUFFER1IDTYPE 0
#define MW_CAN_ACCEPTANCEMASK1_NOR 0
#define MW_CAN_ACCEPTANCEFILTER2_NOR 255
#define MW_CAN_ACCEPTANCEFILTER3_NOR 255
#define MW_CAN_ACCEPTANCEFILTER4_NOR 255
#define MW_CAN_ACCEPTANCEFILTER5_NOR 255
#define MW_CAN_ACCEPTANCEMASK1_EXT 0
#define MW_CAN_ACCEPTANCEFILTER2_EXT 255
#define MW_CAN_ACCEPTANCEFILTER3_EXT 255
#define MW_CAN_ACCEPTANCEFILTER4_EXT 255
#define MW_CAN_ACCEPTANCEFILTER5_EXT 255
#define MW_MODBUS_MODBUS_COMMS 0
#define MW_MODBUS_MODBUS_MODE 0
#define MW_MODBUS_MODBUS_SLAVEID 1
#define MW_MODBUS_MODBUS_CONFIGCOIL 49
#define MW_MODBUS_MODBUS_COILADDR 0
#define MW_MODBUS_MODBUS_COILNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUT 49
#define MW_MODBUS_MODBUS_INPUTADDR 0
#define MW_MODBUS_MODBUS_INPUTNUM 1
#define MW_MODBUS_MODBUS_CONFIGHOLDINGREG 49
#define MW_MODBUS_MODBUS_HOLDINGREGADDR 0
#define MW_MODBUS_MODBUS_HOLDINGREGNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUTREG 49
#define MW_MODBUS_MODBUS_INPUTREGADDR 0
#define MW_MODBUS_MODBUS_INPUTREGNUM 1
#define MW_MODBUS_MODBUS_MASTERTIMEOUT 100
#define MW_RS485_RS485_SERIAL 1
#define MW_RS485_RS485_BAUD 9600
#define MW_RS485_RS485_CONFIG 3
#define MW_RS485_RS485_DEPIN 8
#define MW_RS485_RS485_REPIN 9
#define MW_DISPLAY_ENABLECODEGEN 0
#define MW_DISPLAY_APPLAUNCHBUTTON 
#define MW_DATAVERSION 2016.02
#define MW_DASHBOARDCODEGENINFO_ENABLECODEGEN 0
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_CODEGEN 1
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_BLOCKCLASS codertarget.targetHiddenBlkInsert.internal.circularGauge
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_REGFCN codertarget.arduinobase.blocks.registerDashboardBlk
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_VALIDATEFCN codertarget.targetHiddenBlkInsert.internal.isDashboardBlockCodegenEnabled
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_CODEGEN 1
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_BLOCKCLASS codertarget.targetHiddenBlkInsert.internal.lcdTextDisplay
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_REGFCN codertarget.arduinobase.blocks.registerDashboardBlk
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_VALIDATEFCN codertarget.targetHiddenBlkInsert.internal.isDashboardBlockCodegenEnabled
#define MW_DASHBOARDCODEGENINFO_PUSHBUTTON_CODEGEN 1
#define MW_DASHBOARDCODEGENINFO_PUSHBUTTON_BLOCKCLASS codertarget.targetHiddenBlkInsert.internal.pushButton
#define MW_DASHBOARDCODEGENINFO_PUSHBUTTON_REGFCN codertarget.arduinobase.blocks.registerDashboardBlk
#define MW_DASHBOARDCODEGENINFO_PUSHBUTTON_VALIDATEFCN codertarget.targetHiddenBlkInsert.internal.isDashboardBlockCodegenEnabled

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  int16_T UnitDelay7_DSTATE;           /* '<S1>/Unit Delay7' */
  int16_T UnitDelay5_DSTATE;           /* '<S1>/Unit Delay5' */
  int16_T UnitDelay6_DSTATE;           /* '<S1>/Unit Delay6' */
  int16_T UnitDelay4_DSTATE;           /* '<S1>/Unit Delay4' */
  int16_T UnitDelay_DSTATE;            /* '<S1>/Unit Delay' */
  int16_T UnitDelay1_DSTATE;           /* '<S1>/Unit Delay1' */
  int16_T UnitDelay2_DSTATE;           /* '<S1>/Unit Delay2' */
  int16_T UnitDelay3_DSTATE;           /* '<S1>/Unit Delay3' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int16_T Input;                       /* '<Root>/Input' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int16_T Out1;                        /* '<Root>/Out1' */
} ExtY;

/* Parameters (default storage) */
struct P_ {
  int16_T b1_Gain;                     /* Computed Parameter: b1_Gain
                                        * Referenced by: '<S1>/b1'
                                        */
  int16_T b2_Gain;                     /* Computed Parameter: b2_Gain
                                        * Referenced by: '<S1>/b2'
                                        */
  int16_T b3_Gain;                     /* Computed Parameter: b3_Gain
                                        * Referenced by: '<S1>/b3'
                                        */
  int16_T a2_Gain;                     /* Computed Parameter: a2_Gain
                                        * Referenced by: '<S1>/a2'
                                        */
  int16_T a3_Gain;                     /* Computed Parameter: a3_Gain
                                        * Referenced by: '<S1>/a3'
                                        */
  int16_T a1_Gain;                     /* Computed Parameter: a1_Gain
                                        * Referenced by: '<S1>/a1'
                                        */
  int16_T b4_Gain;                     /* Computed Parameter: b4_Gain
                                        * Referenced by: '<S1>/b4'
                                        */
  int16_T UnitDelay7_InitialCondition;
                              /* Computed Parameter: UnitDelay7_InitialCondition
                               * Referenced by: '<S1>/Unit Delay7'
                               */
  int16_T UnitDelay5_InitialCondition;
                              /* Computed Parameter: UnitDelay5_InitialCondition
                               * Referenced by: '<S1>/Unit Delay5'
                               */
  int16_T UnitDelay6_InitialCondition;
                              /* Computed Parameter: UnitDelay6_InitialCondition
                               * Referenced by: '<S1>/Unit Delay6'
                               */
  int16_T UnitDelay4_InitialCondition;
                              /* Computed Parameter: UnitDelay4_InitialCondition
                               * Referenced by: '<S1>/Unit Delay4'
                               */
  int16_T a4_Gain;                     /* Computed Parameter: a4_Gain
                                        * Referenced by: '<S1>/a4'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S1>/Gain'
                                        */
  int16_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S1>/Unit Delay'
                                */
  int16_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<S1>/Unit Delay1'
                               */
  int16_T UnitDelay2_InitialCondition;
                              /* Computed Parameter: UnitDelay2_InitialCondition
                               * Referenced by: '<S1>/Unit Delay2'
                               */
  int16_T UnitDelay3_InitialCondition;
                              /* Computed Parameter: UnitDelay3_InitialCondition
                               * Referenced by: '<S1>/Unit Delay3'
                               */
};

/* Parameters (default storage) */
typedef struct P_ P;

/* Block parameters (default storage) */
extern P rtP;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Subsystem'
 */

/*-
 * Requirements for '<Root>': untitled
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

// #include "untitled.h"
// #include "rtwtypes.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void untitled_step(void)
{
  int16_T rtb_Gain;
  int16_T rtb_UnitDelay;
  int16_T rtb_UnitDelay1;
  int16_T rtb_UnitDelay2;

  /* Gain: '<S1>/Gain' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  Inport: '<Root>/Input'
   */
  rtb_Gain = (int16_T)(((int32_T)(rtU.Input << 10) * rtP.Gain_Gain) >> 14);

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay = rtDW.UnitDelay_DSTATE;

  /* UnitDelay: '<S1>/Unit Delay1' */
  rtb_UnitDelay1 = rtDW.UnitDelay1_DSTATE;

  /* UnitDelay: '<S1>/Unit Delay2' */
  rtb_UnitDelay2 = rtDW.UnitDelay2_DSTATE;

  /* Sum: '<S1>/Sum4' incorporates:
   *  Gain: '<S1>/Gain'
   *  Gain: '<S1>/a1'
   *  Gain: '<S1>/a2'
   *  Gain: '<S1>/a3'
   *  Gain: '<S1>/a4'
   *  Gain: '<S1>/b1'
   *  Gain: '<S1>/b2'
   *  Gain: '<S1>/b3'
   *  Gain: '<S1>/b4'
   *  Sum: '<S1>/Sum1'
   *  Sum: '<S1>/Sum2'
   *  Sum: '<S1>/Sum3'
   *  Sum: '<S1>/Sum5'
   *  Sum: '<S1>/Sum6'
   *  Sum: '<S1>/Sum7'
   *  Sum: '<S1>/Sum8'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S1>/Unit Delay1'
   *  UnitDelay: '<S1>/Unit Delay2'
   *  UnitDelay: '<S1>/Unit Delay3'
   *  UnitDelay: '<S1>/Unit Delay4'
   *  UnitDelay: '<S1>/Unit Delay5'
   *  UnitDelay: '<S1>/Unit Delay6'
   *  UnitDelay: '<S1>/Unit Delay7'
   */
  rtY.Out1 = (((((((((int16_T)(((int32_T)rtP.b4_Gain * rtDW.UnitDelay3_DSTATE) >>
    14) >> 2) + (int16_T)(((int32_T)rtP.b3_Gain * rtDW.UnitDelay2_DSTATE) >> 14))
                   >> 1) + (int16_T)(((int32_T)rtP.b2_Gain *
    rtDW.UnitDelay1_DSTATE) >> 15)) >> 1) + ((int16_T)(((int32_T)rtP.b1_Gain *
    rtDW.UnitDelay_DSTATE) >> 14) >> 2)) + (rtb_Gain >> 4)) >> 8) -
    (((((((int16_T)(((int32_T)rtP.a4_Gain * rtDW.UnitDelay7_DSTATE) >> 14) >> 2)
         + ((int16_T)(((int32_T)rtP.a3_Gain * rtDW.UnitDelay5_DSTATE) >> 14) <<
            1)) >> 1) + ((int16_T)(((int32_T)rtP.a2_Gain *
          rtDW.UnitDelay6_DSTATE) >> 14) << 1)) + (int16_T)(((int32_T)
        rtP.a1_Gain * rtDW.UnitDelay4_DSTATE) >> 14)) << 1);

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Gain: '<S1>/Gain'
   */
  rtDW.UnitDelay_DSTATE = rtb_Gain;

  /* Update for UnitDelay: '<S1>/Unit Delay1' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtDW.UnitDelay1_DSTATE = rtb_UnitDelay;

  /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  rtDW.UnitDelay2_DSTATE = rtb_UnitDelay1;

  /* Update for UnitDelay: '<S1>/Unit Delay3' incorporates:
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  rtDW.UnitDelay3_DSTATE = rtb_UnitDelay2;

  /* Update for UnitDelay: '<S1>/Unit Delay7' incorporates:
   *  UnitDelay: '<S1>/Unit Delay5'
   * */
  rtDW.UnitDelay7_DSTATE = rtDW.UnitDelay5_DSTATE;

  /* Update for UnitDelay: '<S1>/Unit Delay5' incorporates:
   *  UnitDelay: '<S1>/Unit Delay6'
   * */
  rtDW.UnitDelay5_DSTATE = rtDW.UnitDelay6_DSTATE;

  /* Update for UnitDelay: '<S1>/Unit Delay6' incorporates:
   *  UnitDelay: '<S1>/Unit Delay4'
   * */
  rtDW.UnitDelay6_DSTATE = rtDW.UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S1>/Unit Delay4' incorporates:
   *  Sum: '<S1>/Sum4'
   */
  rtDW.UnitDelay4_DSTATE = rtY.Out1;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  rtDW.UnitDelay_DSTATE = rtP.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  rtDW.UnitDelay1_DSTATE = rtP.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  rtDW.UnitDelay2_DSTATE = rtP.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay3' */
  rtDW.UnitDelay3_DSTATE = rtP.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay7' */
  rtDW.UnitDelay7_DSTATE = rtP.UnitDelay7_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay5' */
  rtDW.UnitDelay5_DSTATE = rtP.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay6' */
  rtDW.UnitDelay6_DSTATE = rtP.UnitDelay6_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay4' */
  rtDW.UnitDelay4_DSTATE = rtP.UnitDelay4_InitialCondition;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: untitled_data.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Thu Jan  4 23:38:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

// #include "untitled.h"

/* Block parameters (default storage) */
P rtP = {
  /* Computed Parameter: b1_Gain
   * Referenced by: '<S1>/b1'
   */
  16384,

  /* Computed Parameter: b2_Gain
   * Referenced by: '<S1>/b2'
   */
  24576,

  /* Computed Parameter: b3_Gain
   * Referenced by: '<S1>/b3'
   */
  16384,

  /* Computed Parameter: a2_Gain
   * Referenced by: '<S1>/a2'
   */
  16522,

  /* Computed Parameter: a3_Gain
   * Referenced by: '<S1>/a3'
   */
  -18400,

  /* Computed Parameter: a1_Gain
   * Referenced by: '<S1>/a1'
   */
  -26678,

  /* Computed Parameter: b4_Gain
   * Referenced by: '<S1>/b4'
   */
  16384,

  /* Computed Parameter: UnitDelay7_InitialCondition
   * Referenced by: '<S1>/Unit Delay7'
   */
  0,

  /* Computed Parameter: UnitDelay5_InitialCondition
   * Referenced by: '<S1>/Unit Delay5'
   */
  0,

  /* Computed Parameter: UnitDelay6_InitialCondition
   * Referenced by: '<S1>/Unit Delay6'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S1>/Unit Delay4'
   */
  0,

  /* Computed Parameter: a4_Gain
   * Referenced by: '<S1>/a4'
   */
  31032,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S1>/Gain'
   */
  19554,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<S1>/Unit Delay'
   */
  0,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S1>/Unit Delay1'
   */
  0,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S1>/Unit Delay2'
   */
  0,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S1>/Unit Delay3'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  untitled_initialize();
  long repeat = 1000;
  for (size_t i = 0; i < 5; i++)
  {
    unsigned long totalTime = 0;

    for (size_t i = 0; i < repeat; i++)
    {
      rtU.Input = random(1, 1000);
      unsigned startTime = millis();
      untitled_step();
      totalTime += millis() - startTime;
    }
    Serial.print("Simulation ");
    Serial.print(i+1);
    Serial.print(" average time: ");
    Serial.println(totalTime / ((1.0) * repeat));
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

#pragma GCC pop_options