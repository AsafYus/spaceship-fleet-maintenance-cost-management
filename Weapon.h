// file Weapon.h
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    Weapon(const std::string& name, int fire_power, int annual_maintenance_cost);

    // Sets the name of weapon.
    void set_name(const std::string& name);
    // Gets the name of weapon.
    std::string get_name();
    // Sets the fire power of weapon.
    void set_fire_power(int fire_power);
    // Gets the fire power of weapon.
    int get_fire_power();
    // Sets the annual maintenance cost of weapon.
    void set_annual_maintenance_cost(int annual_maintenance_cost);
    // Gets the annual maintenance cost of weapon.
    int get_annual_maintenance_cost();

private:
    std::string name_;
    int fire_power_, annual_maintenance_cost_;
};
#endif  // WEAPON_H