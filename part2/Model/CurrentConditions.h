/**
 * @file CurrentConditions.h
 * @brief Declaration of the CurrentConditions display module.
 *
 * Part of the Weather Station system skeleton used to demonstrate
 * object-oriented design and dOxygen documentation.
 */

#ifndef _CURRENTCONDITIONS_H
#define _CURRENTCONDITIONS_H

/** @brief Displays the current weather conditions.
 *
 * Responsible for presenting real-time temperature and wind speed
 * information to the user.
 */

class CurrentConditions {
public: 
    /** Current temperature in degrees Celsius. */
    float currentTemp;
    /** Current wind speed in metres per second. */
    float currentWindSpeed;
    
/** @brief Updates the current weather readings. */
void update();

/** @brief Displays the current weather data. */
void display();
};

#endif //_CURRENTCONDITIONS_H