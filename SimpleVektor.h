#include <iostream>
using namespace std;

#include <ostream> // Add this line

class SimpleVektor
{
public:
    int *daten = nullptr;
    int groesse = 0;

    SimpleVektor(int n);
    SimpleVektor(const SimpleVektor &v2); 
    ~SimpleVektor();

    void operator<<=(int nval);

    //SimpleVektor &operator=(const SimpleVektor &v2);
};

ostream& operator<<(ostream& os, const SimpleVektor &v);

