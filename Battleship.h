// file Battleship.h
#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <vector>

#include "Spacecraft.h"
#include "Weapon.h"


class Battleship : public Spacecraft {
public:
    virtual ~Battleship() = default;

    // Sets the weapon array of batttleship.
    void set_weapon_array(const std::vector<Weapon>& weapon_array);
    // Gets the weapon array of batttleship.
    std::vector<Weapon> get_weapon_array();
    // Gets the fire power of battleship.
    int get_fire_power();
private:
    std::vector<Weapon> weapon_array_;
};

#endif  // BATTLESHIP_H