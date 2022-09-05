// file Cargoship.cpp
#include "Cargoship.h"

Cargoship::Cargoship(std::string name, int commission_year, float maximal_speed, int cargo_capacity, int number_of_space_cranes) : Spacecraft() {
    set_name(name);
    set_comission_year(commission_year);
    set_maximal_speed(maximal_speed);
    set_cargo_capacity(cargo_capacity);
    set_number_of_space_cranes(number_of_space_cranes);
}

void Cargoship::set_number_of_space_cranes(int _number_of_space_cranes)
{
    if (_number_of_space_cranes >= 0)
        number_of_space_cranes = _number_of_space_cranes;
    else
        number_of_space_cranes = 0;
}

int Cargoship::get_number_of_space_cranes()
{
    return number_of_space_cranes;
}

int Cargoship::get_annual_maintenance_cost()
{
    return 2000 + 500 * get_number_of_space_cranes() + 2 * get_cargo_capacity();
}