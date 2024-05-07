#include <iostream>
using namespace std;

#include "Complex.cpp"
#include "SimpleVektor.cpp"

void testComplex()
{
    Complex c1(1.0, 0.0);
    Complex c2(0.0, 1.0);
    cout << " c1 = " << c1 <<  endl ;
    cout << " c2 = " << c2 <<  endl ;
    cout << "SUMME: " << c1+c2 << endl;
    cout << "PRODUKT: " << c1*c2 << endl;
    cout << "PRODUKT: " << 3*c1*c2 << endl; 

/**
 * 3*c1
 * Це не можна локально, бо треба буде "зайти" в клас інтеджер
 * c3 = c1*3;
 *    = c1.operator*(const int i);
 * 3*c1
 * NOT POSSIBLE WITHOUT GLOBAL FUNCTION
 */
    
    //cout << "PRODUKT: " << c1*c2*3 << endl; // 3*c1*c2 DOES NOT WORK, WHY ????
    //UPD: Does not work without local function Complex operator*(const Complex &c1 ,int number)
    cout << "PRODUKT: " << c1*3 << endl; //це можна глобал, бо ми оператор мінятимемо в класі
    cout << "Summe in place: " << (c1 += c2) << endl;
    const Complex cc1(2.0, 0.0);
    const Complex cc2(0.0, 2.0);
    cout << "cc1 = " << cc1 << endl;
    cout << "cc2 = " << cc2 << endl;
    cout << "const SUMME: " << cc1+cc2 << endl;
    cout << "const PRODUKT:" << cc1*cc2 << endl;

}

void test1(int len) {
    SimpleVektor v1(len), v2(len) , v3(3*len); 
    //SimpleVektor v2(len); 
    //SimpleVektor v3(2*len);
    cout << v1 << v2 << v3 << endl;
    v1 <<= 1; v2 <<= 2; v3 <<= 3;   
    cout << v1 << v2 << v3 << endl; 
}

int main(int argc, char const *argv[])
{
    /* code */
    // 3*c1     ==      c1*3
    // global       lokal/global
    //testComplex();

    //REGEL DEN GROSSEN DREI
    //CONSTRUCTOR (WITH DYNAMIC MEMORY)=> DESTRUCTOR => COPYCONSTRUCTOR => ZUWEISUNGOPERATOR
    
    test1(5);
    return 0;
}

