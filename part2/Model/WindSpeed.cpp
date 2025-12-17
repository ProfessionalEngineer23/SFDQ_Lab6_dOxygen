/**
 * @file WindSpeed.cpp
 * @brief Implementation of the WindSpeed sensor class.
 *
 * Provides basic construction and placeholder behaviour
 * for wind speed measurement within the Weather Station system.
 */


#include "WindSpeed.h"

/** @brief Constructs a WindSpeed sensor.
 *
 * Initialises the wind speed value to zero and the unit to metres per second.
 */
WindSpeed::WindSpeed() {
    value = 0.0f;
    unit = "m/s";
}
