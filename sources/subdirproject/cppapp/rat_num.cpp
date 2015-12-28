#include "rat_num.h"

RationalNum::RationalNum(const int num1, const int num2)
{
    numerator = num1;
    denominator = num2;
}

RationalNum::RationalNum(RationalNum &x)
{
    numerator = x.numerator;
    denominator = x.denominator;
}
void RationalNum::Copy(RationalNum numb){
    numerator = numb.numerator;
    denominator = numb.denominator;
}
void RationalNum::sum(int num){
    numerator += num*denominator;

}
void RationalNum::Multi(int Num){
    numerator *= Num;

}
void RationalNum::divide(int Num){
    if (Num == 0){
        DevNull error;
        throw error;
    }
    denominator *= Num;}

RationalNum RationalNum::operator/(int Num){
    if (Num == 0){
        DevNull error;
        throw error;
    }
    RationalNum n;
    n.denominator *= Num;
    return n;
}

double RationalNum::ToDouble() const{
    return((double)numerator / double(denominator));
}

