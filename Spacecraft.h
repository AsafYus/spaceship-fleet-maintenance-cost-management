// file Spacecraft.h

#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>

class Spacecraft {    
public:
    std::string name;
    int commissionYear, cargoCapacit, firePower;
    float maximalSpeed;
    
    Spacecraft() : firePower(10) {
    }
    
    void set_maximal_speed(float maximalSpeed);

    //  A method that returns a total annual maintenance cost.
    virtual int getAnnualMaintenanceCost() = 0;

    virtual ~Spacecraft() = default;

};

#endif  // SPACECRAFT_H