//  Spacecraft.cpp
#include "Spacecraft.h"


//  A method that returns a total annual maintenance cost.
virtual int getAnnualMaintenanceCost() = 0;

void Spacecraft::set_maximal_speed(float maximalSpeed)
{
    if (maximalSpeed >= 0.0f && maximalSpeed <= 10.0f)
        this->maximalSpeed = maximalSpeed;
    else
        this->maximalSpeed = 0.0f;
}

virtual ~Spacecraft() = default;


