#ifndef RAT_NUM_H
#define RAT_NUM_H


#include <iostream>
#include <exception>

using namespace std;

class RationalNum
{
    int numerator;
    int denominator;
public:
    RationalNum(int numerator = 1, int denominator = 8);
    void Copy(RationalNum);
    void Sum(int);
    void Multi(int);
    void Divide(int);
    double ToDouble();
    RationalNum operator+(int);
    RationalNum operator*(int);
    RationalNum operator/(int);

private:

};
class DevNull:public exception{
public:


};

#endif // RAT_NUM_H
