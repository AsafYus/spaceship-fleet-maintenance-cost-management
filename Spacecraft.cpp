//  file Spacecraft.cpp
#include "Spacecraft.h"
#include <iostream>

Spacecraft::Spacecraft() : fire_power(10) {}

void Spacecraft::set_name(const std::string& _name)
{
    auto search = names.find(_name);
    if (search != names.end())
        std::cout << "Error!! The database already have a spacecraft with that name" << std::endl;
    else {
        name = _name;
        names.insert(name);
    }
}

std::string Spacecraft::get_name()
{
    return name;
}

void Spacecraft::set_comission_year(int _commission_year)
{
    commission_year = _commission_year;
}

int Spacecraft::get_commission_year()
{
    return commission_year;
}

void Spacecraft::set_maximal_speed(float _maximal_speed)
{
    if (_maximal_speed >= 0.0f && _maximal_speed <= 10.0f)
        maximal_speed = _maximal_speed;
    else
        maximal_speed = 0.0f;
}

float Spacecraft::get_maximal_speed()
{
    return maximal_speed;
}

void Spacecraft::set_cargo_capacity(int _cargo_capacity)
{
    if (_cargo_capacity > 0)
        cargo_capacity = _cargo_capacity;
    else
        cargo_capacity = 0;
}

int Spacecraft::get_cargo_capacity()
{
    return cargo_capacity;
}

int Spacecraft::get_fire_power()
{
    return fire_power;
}

