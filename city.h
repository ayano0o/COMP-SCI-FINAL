#ifndef CITY_CLASS_H
#define CITY_CLASS_H

#include <string>
#include "point.h"
class City {
    std::string name;
    Point location;

public:
    City();
    City(const std::string &new_name, const Point &new_location);

    void Input(void);
    void Output(void) const;

    const std::string &get_name(void) const { return name; }
    const Point &get_location(void) const { return location; }
};

#endif