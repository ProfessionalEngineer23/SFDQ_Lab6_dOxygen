# Lab 6 – Part 2: Weather Station System

This part of the lab implements the skeleton C++ code for a Weather Station
system based on a refined UML class diagram produced in Lab 3.

## System Overview

The system is structured around a central WeatherStation component, which
interacts with weather data, display modules, and sensor elements. The design
follows object-oriented principles such as separation of concerns and modularity.

## UML Class Diagram

The following UML diagram illustrates the structure of the system and the
relationships between its main components.

![Weather Station UML Diagram](images/WeatherStationUml.png)

## Implementation Details

- Skeleton C++ classes were generated from the UML design
- Each class is defined in its own header and source file
- dOxygen documentation comments were added to:
  - All classes
  - Public methods
  - Important member variables
- No functional logic was implemented, as the focus is on design and documentation

## Documentation Output

dOxygen was used to generate HTML and RTF documentation, which forms the
basis of the lab submission.

## Command used for generating dOxygen config:
```
doxygen -g doxytestconfig
``` 
## Command used to generate the documentation:
```
doxygen doxytestconfig
```
