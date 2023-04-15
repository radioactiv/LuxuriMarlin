/*
 * Re-Defining Base Settings from Configuration_MyTenlog.h so that 
 * file can be used from github w/o modifications (makes pulling 
 * changes easier)
*/
#define TenlogD3
#define TMC2209Drivers
#define DCBed //(Stock)
#define OpticalYBedEndstop // (Stock)
#define MomentaryPowerSwitch // (Stock)
#define TenlogBMGToolhead 
#define PFTEHotened // (Stock)
#define TenlogFilaSensor // (Stock)
#define BLTouchProbe

/*
#### MY OVERRIDES
*/

#define NIX_MACHINE_NAME "RadioActiv - v0.02 [M2.1(xxxxxx)]"
#undef CUSTOM_MACHINE_NAME
#define CUSTOM_MACHINE_NAME NIX_MACHINE_NAME
#undef TENLOG_CONFIG
#define TENLOG_CONFIG NIX_MACHINE_NAME

//#define Z_DRIVER_TYPE TMC2208_STANDALONE
//#define Z2_DRIVER_TYPE TMC2208_STANDALONE
#undef LUX_DEFAULT_AXIS_STEPS_PER_UNIT
#define LUX_DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 822.5, 397.7, 397.7 }

// == PROBING ==
#undef GRID_MAX_POINTS_X
#define GRID_MAX_POINTS_X 5
#undef NOZZLE_TO_PROBE_OFFSET
#define NOZZLE_TO_PROBE_OFFSET { -25, -40, -2.44 }
#undef LUX_NOZZLE_TO_PROBE_OFFSET
#define LUX_NOZZLE_TO_PROBE_OFFSET { -25, -40, -2.44 }
// PROBING_MARGIN = 15
#undef LUX_PROBING_MARGIN_BACK
#define LUX_PROBING_MARGIN_BACK PROBING_MARGIN
#undef LUX_NOZZLE_TO_PROBE_Y
#define LUX_NOZZLE_TO_PROBE_Y -40

// Farthest distance below the trigger-point to go before stopping
#undef Z_PROBE_LOW_POINT
#define Z_PROBE_LOW_POINT -7
#undef Z_PROBE_OFFSET_RANGE_MIN
#define Z_PROBE_OFFSET_RANGE_MIN -7
#undef Z_CLEARANCE_BETWEEN_PROBES
#define Z_CLEARANCE_BETWEEN_PROBES  3 // Z Clearance between probe points
#undef Z_CLEARANCE_MULTI_PROBE
#define Z_CLEARANCE_MULTI_PROBE     2 // Z Clearance between multiple probes
#undef Z_CLEARANCE_MULTI_PROBE
// #define Z_PROBE_FEEDRATE_SLOW 45

// == /PROBING ==
// #define LUX_HEATER_0_MAXTEMP 260
// #define LUX_HEATER_1_MAXTEMP 260

// AutoTune Values
/*
Recv: echo:; Hotend PID:
Recv: echo:  M301 E0 P20.97 I1.92 D57.11
Recv: echo:  M301 E1 P25.00 I2.83 D55.30
Recv: echo:; Bed PID:
Recv: echo:  M304 P157.44 I22.88 D722.23

*/
#undef DEFAULT_Kp_LIST
#undef DEFAULT_Ki_LIST
#undef DEFAULT_Kd_LIST
#define DEFAULT_Kp_LIST { 20.97, 25.00 }
#define DEFAULT_Ki_LIST { 1.92,  2.83 }
#define DEFAULT_Kd_LIST { 57.11, 55.30 }

//Bed
#undef DEFAULT_bedKp
#undef DEFAULT_bedKi
#undef DEFAULT_bedKd
#define DEFAULT_bedKp 157.44
#define DEFAULT_bedKi 22.88
#define DEFAULT_bedKd 722.23

/*
#### END MY OVERRIDES
*/