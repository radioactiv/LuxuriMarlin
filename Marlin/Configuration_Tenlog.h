#define ACBed
#define TitanExtruder
#define SAFETY_Z_UNPARK 4.00 // 26/04/2021 Murdock avoid bed clips (Height to raise. Set to 0 for disable).
#define SAFETY_Y_UNPARK 15.00 // 26/04/2021 Murdock avoid bed clips (Distance to move on Y axis for avoid bed clips).

#define HAS_STATUS_MESSAGE 1
#define REPORT_FAN_CHANGE
#define BABYSTEP_HOME_Z_OFFSET

#define LUX_X_MIN_POS -47
#define LUX_X2_MIN_POS 15
#define LUX_X2_MAX_POS 279
#define LUX_DEFAULT_DUPLICATION_X_OFFSET 117
#define LUX_NUM_RUNOUT_SENSORS 1

//Bed
#if ENABLED(ACBed)
    #define LUX_TEMP_SENSOR_BED 11 //AC Bed
#else //Stock
    #define LUX_TEMP_SENSOR_BED 1
#endif

//Extruder
#if ENABLED(TitanExtruder)
    #define LUX_DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 800, 382.17, 382.17 }
#else //Stock
    #define LUX_DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 800, 92.6, 92.6 }
#endif