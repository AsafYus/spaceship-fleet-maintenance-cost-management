// file Researchship.h
#ifndef RESEARCHSHIP_H
#define RESEARCHSHIP_H

#include "Spacecraft.h"

class Researchship : public Spacecraft {
public:
    Researchship(const std::string& name, int commission_year, float maximal_speed, int cargo_capacity, int number_of_research_labs);

    // Sets the number of research labs of researchship.
    void set_number_of_research_labs(int number_of_research_labs);
    // Gets the number of research labs of researchship.
    int get_number_of_research_labs();
    // Gets the annual maintenance cost by the sum of the base annual maintenance cost that is 3000$ and 1500$ for each research lab.
    int get_annual_maintenance_cost();

private:
    int number_of_research_labs_;
};
#endif  // RESEARCHSHIP_H