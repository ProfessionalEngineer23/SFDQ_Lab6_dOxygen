/**
 * @file WeatherStation.h
 * @brief Declaration of the WeatherStation system controller class.
 *
 * Represents the main Weather Station system responsible for
 * coordinating weather data collection, display, and instrument control.
 */

#ifndef _WEATHERSTATION_H
#define _WEATHERSTATION_H

#include "WeatherData.h"
#include "CurrentConditions.h"
#include "ForecastDisplay.h"

/** @brief Central controller of the Weather Station system.
 *
 * Manages system-level operations such as user access,
 * weather reporting, and instrument configuration.
 */
class WeatherStation {

private:
    WeatherData weatherData;
    CurrentConditions currentConditions;
    ForecastDisplay forecastDisplay;

public: 
    int ID; // Weather station identifier.
    int Port1; // Communication port 1.
    
    /** @brief Logs into the Weather Station system. */
    void Logintoweatherstation();
    
    /** @brief Reports current weather data to the user interface. */
    void ReportWeather();

    /** @brief Reconfigures the specified instruments.
     *  @param instruments Identifier(s) of instruments to reconfigure.
     */
void Reconfigure(const char* Instruments);
    
    /** @brief Shuts down the specified instruments.
     *  @param instruments Identifier(s) of instruments to shut down.
     */
    void ShutDown(const char* Instruments);
    
    /** @brief Restarts the specified instruments.
     *  @param instruments Identifier(s) of instruments to restart.
     */
    void restart(const char* Instruments);
};

#endif //_WEATHERSTATION_H