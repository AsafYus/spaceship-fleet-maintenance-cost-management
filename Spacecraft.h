// Spacecraft.h

#ifndef Spacecraft_H
#define Spacecraft_H

#include <string>

class Spacecraft {    
public:
    std::string name;
    int commissionYear, cargoCapacit, firePower;
    float maximalSpeed;
    
    Spacecraft() : firePower(10) {
    }

    //  A method that returns a total annual maintenance cost.
    virtual int getAnnualMaintenanceCost() = 0;

    virtual ~Spacecraft() = default;

};

#endif