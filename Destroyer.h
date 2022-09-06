// file Destroyer.h
#ifndef DESTROYER_H
#define DESTROYER_H

#include "Battleship.h"

class Destroyer : public Battleship {
public:
    Destroyer(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, const std::vector<Weapon>& weapon_array, int number_of_technicians);

    // Setes the number of technicians of destroyer.
    void set_number_of_technicians(int number_of_technicians);
    // Getes the number of technicians of destroyer.
    int get_number_of_technicians();

    // Gets the annual maintenance cost by the sum of:
    // 1) The base annual maintenance cost of Battleship of type Destroyer that is 6000$.
    // 2) The annual maintenance cost of the weapons installed on the Destroyer,
    // when every technician stationed on the spaceship lowers the annual maintenance costs on the weapons by 10%.
    int get_annual_maintenance_cost();
private:
    int number_of_technicians_;
};
#endif  // DESTROYER_H