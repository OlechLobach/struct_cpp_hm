#include "Complex.h"

Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
Complex subtractComplex(const Complex& c1, const Complex& c2) {
    return { c1.real - c2.real, c1.imag - c2.imag };
}

Complex multiplyComplex(const Complex& c1, const Complex& c2) {
    return { c1.real * c2.real - c1.imag * c2.imag, c1.real * c2.imag + c1.imag * c2.real };
}

Complex divideComplex(const Complex& c1, const Complex& c2) {
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    Complex result = {
        (c1.real * c2.real + c1.imag * c2.imag) / denominator,
        (c1.imag * c2.real - c1.real * c2.imag) / denominator
    };
    return result;
}

void showComplexMenu() {
    double real1, imag1, real2, imag2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    Complex c1 = { real1, imag1 };
    Complex c2 = { real2, imag2 };

    int choice;
    do {
        cout << "Complex Operations:\n"
            << "1. Add Complex Numbers\n"
            << "2. Subtract Complex Numbers\n"
            << "3. Multiply Complex Numbers\n"
            << "4. Divide Complex Numbers\n"
            << "5. Back to Main Menu\n";
        cin >> choice;

        switch (choice) {
        case 1: {
            Complex result = addComplex(c1, c2);
            cout << "Result of addition: " << result.real << " + " << result.imag << "i\n";
            break;
        }
        case 2: {
            Complex result = subtractComplex(c1, c2);
            cout << "Result of subtraction: " << result.real << " + " << result.imag << "i\n";
            break;
        }
        case 3: {
            Complex result = multiplyComplex(c1, c2);
            cout << "Result of multiplication: " << result.real << " + " << result.imag << "i\n";
            break;
        }
        case 4: {
            Complex result = divideComplex(c1, c2);
            cout << "Result of division: " << result.real << " + " << result.imag << "i\n";
            break;
        }
        case 5:
            cout << "Returning to Main Menu...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 5);
}
