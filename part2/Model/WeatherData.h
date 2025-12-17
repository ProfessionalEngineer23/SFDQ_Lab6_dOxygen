/**
 * @file WeatherData.h
 * @brief Declaration of the WeatherData data module.
 *
 * Stores weather readings and provides operations to collect and summarise
 * sensor data within the Weather Station system.
 */

#ifndef _WEATHERDATA_H
#define _WEATHERDATA_H

/** @brief Represents the weather data collection and processing system.
 * 
 * This class is responsible for collecting, summarising, and managing
 * various weather data points such as air temperature, ground temperature,
 * wind speeds, pressures, and rainfall.
 */
class WeatherData {
public: 
    /** Air temperature in degrees Celsius. */
    float airTemp;
    /** Ground temperature in degrees Celsius. */
    float groundTemp;
     /** Wind speed in metres per second. */
    float windSpeeds;
    /** Air pressure in hectopascals (hPa). */
    float pressures;
    /** Rainfall in millimetres (mm). */
    float rainfall;

protected: 
/** @brief Collects weather readings from available sensors. */
void collect();
/** @brief Produces a summary of the collected weather data. */
void summarise();
};

#endif //_WEATHERDATA_H