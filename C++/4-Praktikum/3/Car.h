#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    // Constructor, copy constructor, destructor, dan operasi assignment
    Car(int capacity);
    Car(const Car&);
    virtual ~Car();
    Car& operator=(const Car&);

    void drive();
    void clean();
    void park();
};

#endif