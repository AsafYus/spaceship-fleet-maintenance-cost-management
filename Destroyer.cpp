// file Destroyer.cpp
#include "Destroyer.h"
#include <cmath>    // To use std::round

Destroyer::Destroyer(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, const std::vector<Weapon>& weapon_array, int number_of_technicians) {
    set_name(name);
    set_comission_year(commission_year);
    set_maximal_speed(maximal_speed);
    set_cargo_capacity(cargo_capacity);
    set_weapon_array(weapon_array);
    set_number_of_technicians(number_of_technicians);
}

void Destroyer::set_number_of_technicians(int number_of_technicians)
{
    if (number_of_technicians >= 0 && number_of_technicians <= 5)
        number_of_technicians_ = number_of_technicians;
    else
        number_of_technicians_ = 0;
}

int Destroyer::get_number_of_technicians()
{
    return number_of_technicians_;
}

int Destroyer::get_annual_maintenance_cost()
{
    int sum = 0;

    for (const auto& weapon : Battleship::get_weapon_array())
        sum += weapon.get_annual_maintenance_cost();
    // Now, sum has the annual maintenance cost of the weapons installed on the Destroyer.

    sum -= std::round(sum * get_number_of_technicians() * 0.1f);

    sum += 6000;
    
    return sum;    
}