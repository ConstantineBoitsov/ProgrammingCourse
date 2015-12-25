#ifndef RAT_NUM
#define RAT_NUM

#include <iostream>
#include <exception>

using namespace std;

class RationalNumber
{
private:
    int numerator, denominator;
public:
    RationalNumber(int numer = 3, int denom = 5);
    RationalNumber(RationalNumber& x);
    void Sum(int);
    void Multiple(int);
    void Divide(int);
    double ToDouble() const;
};

class DevNull:public exception
{
public:

};

#endif // RAT_NUM

