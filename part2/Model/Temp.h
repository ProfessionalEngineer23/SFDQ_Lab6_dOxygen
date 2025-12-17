/**
 * @file Temp.h
 * @brief Declaration of the Temp sensor class.
 *
 * Part of the Weather Station system skeleton used to demonstrate
 * object-oriented design and dOxygen documentation.
 */

#ifndef _TEMP_H
#define _TEMP_H

/** @brief This class represents a temperature measurement.
 * 
 * Used to encapsulate temperature-related data
 * and functionalities within the weather station system.
 */
class Temp {
public: 
    /** Temperature value in degrees Celsius. */
    float temperature;
    char unit;

    /** @brief Reads the current temperature.
     *  @return Temperature value in degrees Celsius.
     */
    float readTemperature();
};

#endif //_TEMP_H