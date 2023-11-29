
#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex addComplex(const Complex& c1, const Complex& c2);
Complex subtractComplex(const Complex& c1, const Complex& c2);
Complex multiplyComplex(const Complex& c1, const Complex& c2);
Complex divideComplex(const Complex& c1, const Complex& c2);
void showComplexMenu();

#endif
