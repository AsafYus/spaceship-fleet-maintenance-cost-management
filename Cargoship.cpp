// file Cargoship.cpp
#include "Cargoship.h"
#include <iostream> // For print and debug

Cargoship::Cargoship(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, int number_of_space_cranes) : Spacecraft(name, commission_year, maximal_speed, cargo_capacity) {
    std::cout << "Cargoship::Cargoship(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, int number_of_space_cranes) : Spacecraft(name, commission_year, maximal_speed, cargo_capacity)" << "\t of " << get_name() << std::endl;
    set_number_of_space_cranes(number_of_space_cranes);
}

Cargoship::Cargoship(const Cargoship& other) : Spacecraft(other.get_name(), other.get_commission_year(), other.get_maximal_speed(), other.get_cargo_capacity()) {
    std::cout << "Cargoship::Cargoship(const Cargoship& other)" << "\t of " << other.get_name() << std::endl;
    set_number_of_space_cranes(other.number_of_space_cranes_);
}

Cargoship& Cargoship::operator= (const Cargoship& other)
{
    std::cout << "Cargoship& Cargoship::operator= (const Cargoship& other)" << "\t of " << other.get_name() << std::endl;
    set_name(other.get_name());
    set_comission_year(other.get_commission_year());
    set_maximal_speed(other.get_maximal_speed());
    set_cargo_capacity(other.get_cargo_capacity());
    set_number_of_space_cranes(other.number_of_space_cranes_);

    return *this;
}

Cargoship::Cargoship(Cargoship&& other) noexcept : Spacecraft(std::move(other.get_name()), std::move(other.get_commission_year()), std::move(other.get_maximal_speed()), std::move(other.get_cargo_capacity())), number_of_space_cranes_(std::exchange(other.number_of_space_cranes_, 0)) {
    std::cout << "Cargoship(Cargoship&& other) noexcept" << "\t of " << get_name() << std::endl;
}

Cargoship& Cargoship::operator= (Cargoship&& other) noexcept
{
    std::cout << "Cargoship(Cargoship&& other) noexcept" << "\t of " << other.get_name() << std::endl;
    set_name(std::move(other.get_name()));
    set_comission_year(std::move(other.get_commission_year()));
    set_maximal_speed(std::move(other.get_maximal_speed()));
    set_cargo_capacity(std::move(other.get_cargo_capacity()));
    number_of_space_cranes_ = std::exchange(other.number_of_space_cranes_, 0);

    return *this;
}

void Cargoship::set_number_of_space_cranes(int number_of_space_cranes)
{
    if (number_of_space_cranes >= 0)
        number_of_space_cranes_ = number_of_space_cranes;
    else
        number_of_space_cranes_ = 0;
}

int Cargoship::get_number_of_space_cranes()
{
    return number_of_space_cranes_;
}

int Cargoship::get_annual_maintenance_cost()
{
    return 2000 + 500 * get_number_of_space_cranes() + 2 * get_cargo_capacity();
}