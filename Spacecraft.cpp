//  file Spacecraft.cpp
#include "Spacecraft.h"
#include <iostream>

Spacecraft::Spacecraft() : fire_power_(10) {}
Spacecraft::Spacecraft(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity) {
    set_name(name);
    set_comission_year(commission_year);
    set_maximal_speed(maximal_speed);
    set_cargo_capacity(cargo_capacity);
}

void Spacecraft::set_name(const std::string& name)
{
    auto search = names.find(name);
    if (search != names.end())
        std::cout << "Error!! The database already have a spacecraft with that name" << std::endl;
    else {
        name_ = name;
        names.insert(name_);
    }
}

std::string Spacecraft::get_name() const
{
    return name_;
}

void Spacecraft::set_comission_year(int commission_year)
{
    commission_year_ = commission_year;
}

int Spacecraft::get_commission_year() const
{
    return commission_year_;
}

void Spacecraft::set_maximal_speed(float maximal_speed)
{
    if (maximal_speed >= 0.0f && maximal_speed <= 10.0f)
        maximal_speed_ = maximal_speed;
    else
        maximal_speed_ = 0.0f;
}

float Spacecraft::get_maximal_speed() const
{
    return maximal_speed_;
}

void Spacecraft::set_cargo_capacity(int cargo_capacity)
{
    if (cargo_capacity > 0)
        cargo_capacity_ = cargo_capacity;
    else
        cargo_capacity_ = 0;
}

int Spacecraft::get_cargo_capacity() const
{
    return cargo_capacity_;
}

int Spacecraft::get_fire_power()
{
    return fire_power_;
}