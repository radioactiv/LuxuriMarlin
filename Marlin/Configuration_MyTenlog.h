/**
 * ***************************************************************************
 * *********************** CONFIGURE YOUR MACHINE HERE ***********************
 * ***************************************************************************
 *
 *   Comment and uncomment lines to match your machine configuration.
 *   Visit our Github Wiki for help identifying parts.
 *
 */

/**
 * Machine Type
 */
#define TenlogHands2
// #define TenlogD3
// #define TenlogD5
// #define TenlogD6

/**
 * Stepper Drivers
 */
// #define A4988Drivers
#define TMC2208Drivers // (Stock most of the time)
// #define TMC2209Drivers
#define TMC2209ExtrudersOnlyDrivers //2209 drivers on extruders only

/**
 * Bed Type
 */
// #define DCBed //(Stock)
#define ACBed

/**
 * Bed Endstop
 */
#define OpticalYBedEndstop // (Stock)
// #define ManualBedEndstop

/**
 * Power Switch Type
 */
// #define RockerPowerSwitch // (Stock)
#define NormalPowerSwitch

/**
 * Toolhead
 */
// #define TenlogToolhead // (Stock)
// #define TenlogBMGToolhead
#define HictopTitan // https://www.amazon.com/Titan-extruder-HICTOP-Hero-Tenlog/dp/B083TKZWZ1/
// #define BMGExtruderV2 // https://www.thingiverse.com/thing:4886319 by Andrew Seago
// #define BMGExtruderV3 // https://www.thingiverse.com/thing:5207843 by Andrew Seago
// #define H2Extruder // https://www.thingiverse.com/thing:5355296 by Brandon Smith

/**
 * Hotend
 */
// #define PFTEHotened // (Stock)
#define AllMetalHotend

/**
 * Filament Sensor
 */
#define TenlogFilaSensor // (Stock)
// #define BTTFilaSensor

/**
 * Probe
 */
// #define BLTouchProbe

/**
 * Alternate Motherboards
 */
// #define OctopusMotherboard // https://www.thingiverse.com/thing:4886287 by Andrew Seago

/**
 * Alternate Screens
 * DWIN is not supported by this firmware, visit https://github.com/InsanityAutomation/Marlin/tree/Tenlog_DWIN
 */
// #define BTTTFTSCreen
// #define LCDmini12864Screen