/**
 * @file ForecastDisplay.h
 * @brief Declaration of the ForecastDisplay module.
 *
 * Part of the Weather Station system skeleton used to demonstrate
 * object-oriented design and dOxygen documentation.
 */


#ifndef _FORECASTDISPLAY_H
#define _FORECASTDISPLAY_H

/** @brief Displays the next-day weather forecast.
 *
 * This class is responsible for presenting predicted temperature information
 * for the upcoming day.
 */
class ForecastDisplay {
public: 
    /** Next-day forecast temperature in degrees Celsius. */
    float NextDayTemp;
    
    /** @brief Gets the temperature forecast for the next day. */
    void getTempForecast();

    /** @brief Displays the temperature forecast for the next day. */
    void displayTempForecast();
};

#endif //_FORECASTDISPLAY_H