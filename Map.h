#ifndef MAP_CLASS_H
#define MAP_CLASS_H

#include "city.h"
#include "point.h"
#include <vector>
#include <string>


class Map {
    std::vector <City> cities;
    const int maxCities;

public:
    Map(int maxCities);

    void EnterCityInformation(void);
    void CalculateDistance(void);
    void PrintAllCities(void);

private:
    int FindCityIndex(const City &cityName) const;
    double DistanceBetweenCities(const City &city1, const City &city2) const;
};

#endif