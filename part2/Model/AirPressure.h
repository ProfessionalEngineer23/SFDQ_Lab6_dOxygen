/**
 * @file AirPressure.h
 * @brief Declaration of the AirPressure sensor class.
 *
 * Part of the Weather Station system skeleton used to demonstrate
 * object-oriented design and dOxygen documentation.
 */

#ifndef _AIRPRESSURE_H
#define _AIRPRESSURE_H

/** @brief Represents an air pressure sensor.
 *
 * Provides an interface for reading atmospheric pressure values
 * within the Weather Station system.
 */

class AirPressure {
    public:
        /** @brief Reads the current atmospheric pressure.
         *  @return atmospheric pressure in hPa.
         */    
        float readPressure();
};

#endif //_AIRPRESSURE_H