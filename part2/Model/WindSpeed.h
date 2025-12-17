/**
 * @file WindSpeed.h
 * @brief Declaration of the WindSpeed sensor class.
 *
 * Part of the Weather Station system skeleton used to demonstrate
 * object-oriented design and dOxygen documentation.
 */

#ifndef _WINDSPEED_H
#define _WINDSPEED_H
#include <string>

/** @brief This class represents a wind speed measurement.
 * 
 * This class is used to encapsulate wind speed-related data
 * and functionalities within the weather station system.
 */
class WindSpeed {
public: 
    /** Wind speed value in m/s. */
    float value;
    /** Wind speed unit. */
    std::string unit;
    /** @brief Constructs a WindSpeed sensor.
    *
    * Initialises the wind speed value and unit.
    */
    WindSpeed();
};

#endif //_WINDSPEED_H