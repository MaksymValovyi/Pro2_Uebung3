#include <iostream>
using namespace std;

#include "Complex.cpp"

void testComplex()
{
    Complex c1(1.0, 0.0);
    Complex c2(0.0, 1.0);
    cout << " c1 = " << c1 <<  endl ;
    cout << " c2 = " << c2 <<  endl ;
    cout << "SUMME: " << c1+c2 << endl;
    cout << "PRODUKT: " << c1*c2 << endl;
    cout << "PRODUKT: " << 3*c1*c2 << endl; 
    //cout << "PRODUKT: " << c1*c2*3 << endl; // 3*c1*c2 DOES NOT WORK, WHY ????
    //UPD: Does not work without local function Complex operator*(const Complex &c1 ,int number)
    cout << "PRODUKT: " << c1*3 << endl;
    cout << "Summe in place: " << (c1 += c2) << endl;
    const Complex cc1(2.0, 0.0);
    const Complex cc2(0.0, 2.0);
    cout << "cc1 = " << cc1 << endl;
    cout << "cc2 = " << cc2 << endl;
    cout << "const SUMME: " << cc1+cc2 << endl;
    cout << "const PRODUKT:" << cc1*cc2 << endl;

}

int main(int argc, char const *argv[])
{
    /* code */
    // 3*c1     ==      c1*3
    // global       lokal/global
    testComplex();

    return 0;
}
