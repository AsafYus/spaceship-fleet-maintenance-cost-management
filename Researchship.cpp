// file Researchship.cpp
#include "Researchship.h"

Researchship::Researchship(std::string name, int commission_year, float maximal_speed, int cargo_capacity, int number_of_research_labs) : Spacecraft() {
    set_name(name);
    set_comission_year(commission_year);
    set_maximal_speed(maximal_speed);
    set_cargo_capacity(cargo_capacity);
    set_number_of_research_labs(number_of_research_labs);
}

void Researchship::set_number_of_research_labs(int _number_of_research_labs)
{
    if (_number_of_research_labs >= 0)
        number_of_research_labs = _number_of_research_labs;
    else
        number_of_research_labs = 0;
}

int Researchship::get_number_of_research_labs()
{
    return number_of_research_labs;
}

int Researchship::get_annual_maintenance_cost()
{
    return 3000 + 1500 * get_number_of_research_labs();
}