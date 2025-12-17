/**
 * @file MicrocontrollerElement.h
 * @brief Declaration of the MicrocontrollerElement controller class.
 *
 * Coordinates sensor updates, display of current conditions,
 * and forecasting operations within the Weather Station system.
 */

#include "CurrentConditions.h"
#include "ForecastDisplay.h"
#ifndef _MICROCONTROLLERELEMENT_H
#define _MICROCONTROLLERELEMENT_H

/** @brief Central controller of the Weather Station system.
 *
 * Responsible for coordinating sensor data acquisition,
 * updating display modules, and triggering weather forecasts.
 */
class MicrocontrollerElement {

private:
    // Associations to system components
    CurrentConditions currentConditions;
    ForecastDisplay forecastDisplay;

public:
    /** @brief Updates sensor data used by the system. */
    void Update();

    /** @brief Displays the current weather conditions. */
    void displayCurrentConditions();

    /** @brief Generates a forecast for the next day. */
    void forecastNextDay();

};

#endif //_MICROCONTROLLERELEMENT_H