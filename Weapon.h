// file Weapon.h
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    Weapon();
    Weapon(const std::string& name, int fire_power, int annual_maintenance_cost);

    // Copy constructor. 
    Weapon(const Weapon& other);
    // Copy assignment operartor.
    Weapon& operator= (const Weapon& other);

    // Move constructor to use it in the call of push_back()
    // instead of having a copy operation performed on each creation of an object.
    Weapon(Weapon&& other) noexcept;
    // Move operartor because I wrote an explicit move constructor.
    Weapon& operator= (Weapon&& other) noexcept;

    // ~Weapon();

    // Sets the name of weapon.
    void set_name(const std::string& name);
    // Gets the name of weapon.
    std::string get_name();
    // Sets the fire power of weapon.
    void set_fire_power(int fire_power);
    // Gets the fire power of weapon.
    int get_fire_power() const;
    // Sets the annual maintenance cost of weapon.
    void set_annual_maintenance_cost(int annual_maintenance_cost);
    // Gets the annual maintenance cost of weapon.
    int get_annual_maintenance_cost() const;

private:
    std::string name_;
    int fire_power_, annual_maintenance_cost_;
};
#endif  // WEAPON_H