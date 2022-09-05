// file Cargoship.h
#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Spacecraft.h"

class Cargoship : public Spacecraft {
public:
    Cargoship(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, int number_of_space_cranes);
    
    // Sets the number of space cranes of cargoship.
    void set_number_of_space_cranes(int number_of_space_cranes);
    // Gets the number of space cranes of cargoship.
    int get_number_of_space_cranes();
    // Gets the annual maintenance cost by the sum of the base annual maintenance cost that is 2000$ and 2$ for each Megaton of cargo capacity.
    int get_annual_maintenance_cost();

private:
    int number_of_space_cranes_;
};
#endif  // CARGOSHIP_H