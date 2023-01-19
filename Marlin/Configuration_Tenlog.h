#define ACBed
#define TitanExtruder

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