# Lab 6 – Part 1: Introduction to dOxygen

This part of the lab demonstrates the basic use of dOxygen to generate
software documentation from commented C++ source code.

## Overview

A simple Shape example was implemented using an abstract base class and
a derived Triangle class. dOxygen documentation comments were added to
classes, methods, and member variables.

## Key Concepts Demonstrated

- Use of dOxygen DocBlocks (`/** ... */`)
- Documentation of classes and inheritance
- Documentation of methods, parameters, and return values
- Generation of HTML and RTF documentation using dOxygen

This part was used to verify correct dOxygen installation and configuration
before documenting a larger system in Part 2.

## Command used for generating dOxygen config:
```
doxygen -g doxytestconfig
``` 
## Command used to generate the documentation:
```
doxygen doxytestconfig
```