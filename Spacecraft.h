// file Spacecraft.h
#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include <unordered_set>

class Spacecraft {    
public:
    Spacecraft();
    Spacecraft(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity);
    
    virtual ~Spacecraft() = default;

    // Sets the unique name of spaceship.
    void set_name(const std::string& name);
    // Returns the unique name of spaceship.
    std::string get_name() const;
    
    // Sets the commission Year.
    void set_comission_year(int commission_year);
    // Returns the year of manufacture spaceship.
    int get_commission_year() const;

    // Sets the maximum speed of spaceship.
    void set_maximal_speed(float maximal_speed);
    // Returns the maximum speed of spaceship.
    float get_maximal_speed() const;

    // Sets the cargo capacity of spaceship.
    void set_cargo_capacity(int cargo_capacity);
    // Gets the cargo capacity of spaceship.
    int get_cargo_capacity() const;

    // Gets the fire power of spaceship.
    virtual int get_fire_power();
    
    // A method that returns a total annual maintenance cost.
    virtual int get_annual_maintenance_cost() = 0;

private:
    std::string name_;
    int commission_year_, cargo_capacity_, fire_power_;
    float maximal_speed_;

    std::unordered_set<std::string> names;  // The unique names of the spaceships.
};
#endif  // SPACECRAFT_H