// file Cruiser.h
#ifndef CRUISER_H
#define CRUISER_H

#include "Battleship.h"

class Cruiser : public Battleship {
public:
    Cruiser(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, const std::vector<Weapon>& weapon_array);

    // Gets the annual maintenance cost by the sum of:
    // 1) The base annual maintenance cost of Battleship of type Cruiser that is 2000$.
    // 2) The sum of all maintenance cost of any weapon on the Battleship.
    // 3) The cost of maintaining the battleship engines depending on the maximum speed of the battleship.
    int get_annual_maintenance_cost();
};
#endif  // CRUISER_H