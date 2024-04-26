#include <iostream>
using namespace std;

class Complex
{

double re;
double im;

public:
    inline Complex(double real_part, double imag_part);

    double getRe();
    double getRe() const;
    double getIm();
    double getIm() const;

    Complex operator+(const Complex &c1);

};

ostream& operator<<(ostream& os, const Complex &c);
//global