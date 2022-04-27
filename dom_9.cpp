#include "dom_9.h"

int Property::percentage = 0;

Property::Property(int worth = 0)
{
    this->worth = worth;
}

void Apartment::CountTax() 
{
    percentage = worth / 1000;
}

void Apartment::Print()  
{
    cout << "Налог на квартиру равен " << percentage << endl;
}

void Car::CountTax()
{
    percentage = worth / 200;
}
void Car::Print()
{
    cout << "Налог на машину равен " << percentage << endl;
}

void CountryHouse::CountTax()
{
    // cout << C / 500;
    percentage = worth / 500;
}
void CountryHouse::Print()
{
    cout << "Налог на дом равен " << percentage << endl;
}
