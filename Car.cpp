
#include "Car.h"

void setCarDetails(Car& car, double length, double clearance, double engineVolume, double enginePower, double wheelDiameter, const std::string& color, const std::string& transmissionType) {
    car.length = length;
    car.clearance = clearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

void displayCarDetails(const Car& car) {
    cout << "Car Details:\n"
        << "Length: " << car.length << " meters\n"
        << "Clearance: " << car.clearance << " meters\n"
        << "Engine Volume: " << car.engineVolume << " cc\n"
        << "Engine Power: " << car.enginePower << " hp\n"
        << "Wheel Diameter: " << car.wheelDiameter << " inches\n"
        << "Color: " << car.color << "\n"
        << "Transmission Type: " << car.transmissionType << "\n";
   
}

bool searchCarByColor(const Car& car, const string& color) {
    return car.color == color;
}
