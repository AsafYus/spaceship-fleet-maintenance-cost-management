// file Cruiser.cpp
#include "Cruiser.h"

Cruiser::Cruiser(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, const std::vector<Weapon>& weapon_array) {
    set_name(name);
    set_comission_year(commission_year);
    set_maximal_speed(maximal_speed);
    set_cargo_capacity(cargo_capacity);
    set_weapon_array(weapon_array);
}

int Cruiser::get_annual_maintenance_cost()
{
    int sum = 2000;

    for (const auto& weapon : get_weapon_array())
        sum += weapon.get_annual_maintenance_cost();
    
    sum += 1000 * get_maximal_speed();
    
    return sum;
}