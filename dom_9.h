#ifndef DOM_9
#define DOM_9
#include <iostream>
using namespace std;

class Property
{
protected:
    int worth;
    static int percentage;

public:
    Property(int worth);

    virtual void CountTax() = 0;
    virtual void Print() = 0;
};


class Apartment : public Property
{
public:
    Apartment(int worth) :Property(worth) 
    {
        // this->worth = worth;
    }
    void CountTax();
    void Print() ;
};


class Car : public Property
{
public:
    Car(int worth) :Property(worth)
    {
        // this->worth = worth;
    }
    void CountTax();
    void Print();
};


class CountryHouse : public Property
{
public:
    CountryHouse(int worth) :Property(worth)
    {
        // this->worth = worth;
    }
    void CountTax();
    void Print();
};

#endif
