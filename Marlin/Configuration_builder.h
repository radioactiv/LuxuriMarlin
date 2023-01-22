/**
 * ***************************************************************************
 * ******************************* DO NOT EDIT *******************************
 * ***************************************************************************
 *
 *   Configure your base machine in Configuration_Tenlog.h
 *   Then edit Configuration.adv and Configuration.h directly if needed.
 *
 */

//Machine Type
#if ENABLED(TenlogHands2)
  #define LUX_X_BED_SIZE 235
  #define LUX_Y_BED_SIZE 240
  #define LUX_X_MIN_POS -47
  #define LUX_X_MAX_POS  LUX_X_BED_SIZE
  #define LUX_X2_MIN_POS 15
  #define LUX_X2_MAX_POS 279
  #define LUX_Y_MAX_POS 253
  #define LUX_Z_MAX_POS 260
  #define LUX_DEFAULT_DUPLICATION_X_OFFSET 117
#elif ENABLED(TenlogD3)
  #define LUX_X_BED_SIZE 310
  #define LUX_Y_BED_SIZE 310
  #define LUX_X_MIN_POS -47
  #define LUX_X_MAX_POS  LUX_X_BED_SIZE
  #define LUX_X2_MIN_POS 15
  #define LUX_X2_MAX_POS 359
  #define LUX_Y_MAX_POS 333
  #define LUX_Z_MAX_POS 350
  #define LUX_DEFAULT_DUPLICATION_X_OFFSET 155
#endif

//Bed Type
#if ENABLED(ACBed)
  #define LUX_TEMP_SENSOR_BED 11
#else //DC Bed
  #define LUX_TEMP_SENSOR_BED 1
#endif

//Bed Endstop
#if ENABLED(ManualBedEndstop)
  #define LUX_Y_MIN_ENDSTOP_INVERTING false
#else //Optical Y
  #define LUX_Y_MIN_ENDSTOP_INVERTING true
#endif

//Power Switch Type
//  No logic needed here

//Toolhead
#if ENABLED(HictopTitan)
  #define LUX_DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 800, 382.17, 382.17 }
#else // Stock Toolhead
  #define LUX_DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 800, 92.6, 92.6 }
#endif

//Filament Sensor
#define LUX_NUM_RUNOUT_SENSORS 1

//Stepper Drivers
#if ENABLED(TMC2208Drivers)
  #define LUX_XYZ_DRIVER_TYPE TMC2208_STANDALONE
  #define LUX_INVERT_X_DIR false
  #define LUX_INVERT_Y_DIR true
  #define LUX_INVERT_Z_DIR false
  #define LUX_INVERT_E0_DIR true
	#define LUX_INVERT_E1_DIR false
#elif ENABLED(TMC2209Drivers)
  #define LUX_XYZ_DRIVER_TYPE TMC2209_STANDALONE
  #define LUX_LIN_ADVANCE
  #define LUX_INVERT_X_DIR false
  #define LUX_INVERT_Y_DIR true
  #define LUX_INVERT_Z_DIR false
  #define LUX_INVERT_E0_DIR true
  #if ENABLED(HictopTitan)
    #define LUX_INVERT_E1_DIR true
  #else
    #define LUX_INVERT_E1_DIR false
	#endif
#elif ENABLED(A4988Drivers)
  #define LUX_XYZ_DRIVER_TYPE A4988
  #define LUX_LIN_ADVANCE
  #define LUX_INVERT_X_DIR true
  #define LUX_INVERT_Y_DIR false
  #define LUX_INVERT_Z_DIR true
  #define LUX_INVERT_E0_DIR false
  #if ENABLED(HictopTitan)
    #define LUX_INVERT_E1_DIR false
  #else
    #define LUX_INVERT_E1_DIR true
	#endif
#endif
#if ENABLED(TMC2209ExtrudersOnly) //2209 drivers on extruders only
  #undef LUX_LIN_ADVANCE
  #undef LUX_INVERT_E0_DIR
  #undef LUX_INVERT_E1_DIR
  #define LUX_E_DRIVER_TYPE TMC2209_STANDALONE
  #define LUX_LIN_ADVANCE
  #define LUX_INVERT_E0_DIR true
  #if ENABLED(HictopTitan)
    #define LUX_INVERT_E1_DIR true
  #else
    #define LUX_INVERT_E1_DIR false
  #endif
#else
  #define LUX_E_DRIVER_TYPE LUX_XYZ_DRIVER_TYPE
#endif

//Required Flags
#define HAS_STATUS_MESSAGE 1 //M117 Support without a screen
#define BABYSTEP_HOME_Z_OFFSET //Baby-step logic for current tool or probe
#define SAFETY_Z_UNPARK 4.00 //Avoid bed clips (Height to raise. Set to 0 for disable). Murdock 26/04/2021
#define SAFETY_Y_UNPARK 15.00 //Avoid bed clips (Distance to move on Y axis for avoid bed clips). Murdock 26/04/2021