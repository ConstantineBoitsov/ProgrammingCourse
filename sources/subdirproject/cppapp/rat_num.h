#ifndef RAT_NUM
#define RAT_NUM

#include <iostream>
#include <exception>

using namespace std;

class RationalNum
{
    int numerator;
    int denominator;
public:
    RationalNum(const int num1 = 1, const int num2 = 8);
    RationalNum(RationalNum & x);
    void Copy(RationalNum);
    void sum(int);
    void Multi(int);
    void divide(int);
    double ToDouble() const;
    RationalNum operator/(int);
private:

};
class DevNull:public exception{
public:


};

#endif // RAT_NUM

