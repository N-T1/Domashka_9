#include <iostream>
#include <string>
#include "dom_9.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    Property* prop[7]; // массив из семи указателей на Property

    prop[0] = new Apartment(1000);
    prop[1] = new Apartment(2000);
    prop[2] = new Apartment(3000);
    prop[3] = new Car(1000);
    prop[4] = new Car(2000);
    prop[5] = new CountryHouse(1000);
    prop[6] = new CountryHouse(2000);

    for (int i = 0; i < 7; i++)
    {
        prop[i]->CountTax();
        prop[i]->Print();
        delete[] prop[i];
    }
    return 0;
}