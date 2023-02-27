// file Battleship.cpp
#include "Battleship.h"

void Battleship::set_weapon_array(const std::vector<Weapon>& weapon_array)
{
    weapon_array_.resize(weapon_array.size());
    weapon_array_ = weapon_array;
}

std::vector<Weapon> Battleship::get_weapon_array()
{
    return weapon_array_;
}

int Battleship::get_fire_power()
{
    // The total fire power contains the base fire power of spacecraft,
    // in addition to the firepower of any weapons on the spacecraft.
    int sum = Spacecraft::get_fire_power();

    for (const auto& weapon : weapon_array_)
        sum += weapon.get_fire_power();

    return sum;
}