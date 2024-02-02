#include <iostream>
#include <vector>
#include <string>
#include "Map.h"
#include "point.h"
#include "city.h"

using namespace std;

int main() {
    const int maxCities = 10;  // Maximum number of cities
    Map map(maxCities);

    char choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1) Enter city Information\n";
        std::cout << "2) Calculate Distance between two cities\n";
        std::cout << "3) Print All cities\n";
        std::cout << "4) Quit\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case '1':
                map.EnterCityInformation();
                break;
            case '2':
                map.CalculateDistance();
                break;
            case '3':
                map.PrintAllCities();
                break;
            case '4':
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                break;
        }

    } while (choice != '4');

    return 0;
}