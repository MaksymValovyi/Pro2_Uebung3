#include "SimpleVektor.h"

SimpleVektor::SimpleVektor(int n)
{
    this->daten = new int[n]; 
    if(this->daten!=nullptr){
        for (int i = 0; i < n; i++)
        {
            this->daten[i] = 0;
        }
    }
    this->groesse = n;
}

SimpleVektor::~SimpleVektor()
{
    if(this->daten!=nullptr){
        delete [] this->daten;
        this->groesse = 0;
    }
}

//Copyconstructor
/**
 * @brief Copy constructor for SimpleVektor class.
 * 
 * This constructor creates a new SimpleVektor object by copying the contents of another SimpleVektor object.
 * It allocates memory for the data array and copies the elements from the source object to the new object.
 * 
 * @param v2 The SimpleVektor object to be copied.
 */
SimpleVektor::SimpleVektor(const SimpleVektor &v2)
{
    int n = v2.groesse;
    this->daten = new int[n]; 
    if(this->daten!=nullptr){
        for (int i = 0; i < n; i++)
        {
            this->daten[i] = v2.daten[i];
        }
    }
    this->groesse = n;
}

void SimpleVektor::operator<<=(int nval)
{
    if(this->daten!=nullptr){
        for (int i = 0; i < this->groesse; i++)
        {
            this->daten[i] = nval;
        }
    }
}
/*
//zuweisungsoperator
SimpleVektor &SimpleVektor::operator=(const SimpleVektor &vref)
{
    return *this;
}

*/
///////Ab hier globale Operatoren

ostream& operator<<(ostream& os, const SimpleVektor& v)
{
    /*
    os << "SimpleVektor: ";
        for (int i = 0; i < v.groesse; i++)
        {
            os << v.daten[i] << " ";
        }
        os << endl;
   */
    os << "V[" << v.groesse << " ]";
    
    if(v.daten!=nullptr){
        for(int i = 0; i < v.groesse; i++){
            os << " " << v.daten[i] << " ";
        }
    }
    os << endl;
    return os;
    
}