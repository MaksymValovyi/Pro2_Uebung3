#include <iostream>
using namespace std;

#include "Complex.h"


Complex::Complex(double real_part, double imag_part)
    : re(real_part), im(imag_part)
{

}

double Complex::getIm(){
    return im;
}

double Complex::getRe(){
    return re;
}

double Complex::getIm() const {
    return im;
}

double Complex::getRe() const {
    return re;
}

Complex Complex::operator+(const Complex &c1)
{
    Complex cresult(0.0, 0.0);
    
    return cresult;
}
///////// Hier folgen die globalen Funktionen

ostream& operator<<(ostream& os, const Complex &c)
{
    if(c.getIm()<0){
        os << c.getRe() << " - " << c.getIm() << "i"; 
    }else
    {
        os << c.getRe() << " + " << c.getIm() << "i"; 
    }
    
    return os;
}