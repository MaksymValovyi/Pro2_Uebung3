#include <iostream>
using namespace std;

#include "Complex.cpp"

void testComplex()
{
    Complex c1(1.0, 0.0);
    Complex c2(0.0, 1.0);
    cout << " c1 = " << c1 <<  endl ;
    cout << " c2 = " << c2 <<  endl ;
}

int main(int argc, char const *argv[])
{
    /* code */
    // 3*c1     ==      c1*3
    // global       lokal/global
    testComplex();

    return 0;
}
