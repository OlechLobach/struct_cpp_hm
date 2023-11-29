#include <iostream>
#include "Complex.h"
#include "Car.h"

void showMenu() {
    cout << "Choose an option:\n"
        << "1. Complex Number Operations\n"
        << "2. Car Functions\n"
        << "3. Exit\n";
}

int main() {
    int choice;
    string searchColor, transmissionType, color;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            showComplexMenu(); 
           
            break;  
        case 2: {
            Car car;
            double length, clearance, engineVolume, enginePower, wheelDiameter;

            cout << "Enter Car Details:\n";
            cout << "Length: ";
            cin >> length;
            cout << "Clearance: ";
            cin >> clearance;
            cout << "Engine Volume: ";
            cin >> engineVolume;
            cout << "Engine Power: ";
            cin >> enginePower;
            cout << "Wheel Diameter: ";
            cin >> wheelDiameter;
            cout << "Color: ";
            cin >> color;
            cout << "Transmission Type: ";
            cin >> transmissionType;

            setCarDetails(car, length, clearance, engineVolume, enginePower, wheelDiameter, color, transmissionType);

            cout << "Car Details Set!\n";

            displayCarDetails(car);

            cout << "Enter a color to search for in the Car Database: ";
            cin >> searchColor;
            if (searchCarByColor(car, searchColor)) {
                cout << "Car found with color: " << searchColor << "\n";
            }
            else {
                cout << "Car not found with color: " << searchColor << "\n";
            }
            break;
        }
        case 3:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 3);

    return 0;
}
 
