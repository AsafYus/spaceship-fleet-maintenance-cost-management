// file Weapon.cpp
#include "Weapon.h"
#include <utility>  // To use std::move and std::exchange
#include <iostream> // For print and debug

Weapon::Weapon() : name_(""), fire_power_(0), annual_maintenance_cost_(0) {}

Weapon::Weapon(const std::string& name, int fire_power, int annual_maintenance_cost) {
    std::cout << "Weapon::Weapon(const std::string& name, int fire_power, int annual_maintenance_cost)" << "\t of " << name << std::endl;
    set_name(name);
    set_fire_power(fire_power);
    set_annual_maintenance_cost(annual_maintenance_cost);
}

Weapon::Weapon(const Weapon& other) : name_(other.name_), fire_power_(other.fire_power_), annual_maintenance_cost_(other.annual_maintenance_cost_) {
    std::cout << "Weapon::Weapon(const Weapon& other)" << "\t of " << name_ << std::endl;
}

Weapon& Weapon::operator= (const Weapon& other)
{
    std::cout << "Weapon& Weapon::operator= (const Weapon& other)" << "\t of " << other.name_ << std::endl;
    name_ = other.name_;
    fire_power_ = other.fire_power_;
    annual_maintenance_cost_ = other.annual_maintenance_cost_;

    return *this;
}

Weapon::Weapon(Weapon&& other) noexcept : name_(std::move(other.name_)), fire_power_(std::exchange(other.fire_power_, 0)), annual_maintenance_cost_(std::exchange(other.annual_maintenance_cost_, 0)) {
    std::cout << "Weapon::Weapon(Weapon&& other) noexcept" << "\t of " << name_ << std::endl;
}

Weapon& Weapon::operator= (Weapon&& other) noexcept
{
    std::cout << "Weapon& Weapon::operator= (Weapon&& other) noexcept" << "\t of " << other.name_ << std::endl;
    name_ = std::move(other.name_);
    fire_power_ = std::exchange(other.fire_power_, 0);
    annual_maintenance_cost_ = std::exchange(other.annual_maintenance_cost_, 0);

    return *this;
}

// Weapon::~Weapon() {
//     std::cout << "Weapon::~Weapon()" << std::endl;
// }

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

int Weapon::get_annual_maintenance_cost() const
{
    return annual_maintenance_cost_;
}
