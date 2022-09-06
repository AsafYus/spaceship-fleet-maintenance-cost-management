// file Weapon.cpp
#include "Weapon.h"

Weapon::Weapon(const std::string& name, int fire_power, int annual_maintenance_cost) {
    set_name(name);
    set_fire_power(fire_power);
    set_annual_maintenance_cost(annual_maintenance_cost);
}

Weapon::Weapon(Weapon&& other) : name_(), fire_power_(0), annual_maintenance_cost_(0)
{
    name_ = other.name_;
    fire_power_ = other.fire_power_;
    annual_maintenance_cost_ = other.annual_maintenance_cost_;

    other.name_ = "";
    other.fire_power_ = 0;
    other.annual_maintenance_cost_ = 0;
}

Weapon& Weapon::operator= (Weapon&& other)
{
    if (this != &other)
    {
        name_ = "";
        name_ = other.name_;
        fire_power_ = other.fire_power_;
        annual_maintenance_cost_ = other.annual_maintenance_cost_;

        other.name_ = "";
        other.fire_power_ = 0;
        other.annual_maintenance_cost_ = 0;
    }

    return *this;
}

void Weapon::set_name(const std::string& name)
{
    name_ = name;
}

std::string Weapon::get_name()
{
    return name_;
}

void Weapon::set_fire_power(int fire_power)
{
    if (fire_power >= 0)
        fire_power_ = fire_power;
    else
        fire_power_ = 0;
}

int Weapon::get_fire_power() const
{
    return fire_power_;
}

void Weapon::set_annual_maintenance_cost(int annual_maintenance_cost)
{
    if (annual_maintenance_cost >= 0)
        annual_maintenance_cost_ = annual_maintenance_cost;
    else
        annual_maintenance_cost_ = 0;
}

int Weapon::get_annual_maintenance_cost()
{
    return annual_maintenance_cost_;
}
