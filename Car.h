
#ifndef CAR_H
#define CAR_H

#include<iostream>
#include <string>
using namespace std;

struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};

void setCarDetails(Car& car, double length, double clearance, double engineVolume, double enginePower, double wheelDiameter, const std::string& color, const std::string& transmissionType);
void displayCarDetails(const Car& car);
bool searchCarByColor(const Car& car, const std::string& color);

#endif
