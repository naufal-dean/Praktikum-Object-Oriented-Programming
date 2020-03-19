#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    // Constructor, copy constructor, destructor, dan operasi assignment
    Bike();
    Bike(const Bike&);
    virtual ~Bike();
    Bike& operator=(const Bike&);

    // mengendarai motor
    void ride();
};

#endif