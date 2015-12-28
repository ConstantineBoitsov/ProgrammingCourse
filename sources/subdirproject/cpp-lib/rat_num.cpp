#include "rat_num.h"


RationalNum::RationalNum(int numerator, int denominator): numerator(numerator), denominator(denominator){}

void RationalNum::Copy(RationalNum numb){
    numerator = numb.numerator;
    denominator = numb.denominator;
}
void RationalNum::Sum(int num){
    numerator += num*denominator;

}
void RationalNum::Multi(int num){
    numerator *= num;

}
void RationalNum::Divide(int num){
    if (num == 0){
        DevNull error;
        throw error;
    }
    denominator *= num;}

RationalNum RationalNum::operator/(int num){
    if (num == 0){
        DevNull error;
        throw error;
    }
    RationalNum n;
    n.denominator *= num;
    return n;
}

double RationalNum::ToDouble(){
    return((double)numerator / double(denominator));
}

RationalNum RationalNum::operator+(int num)
{
    RationalNum n;
    n.numerator += num*n.denominator;
    return n;
}

RationalNum RationalNum::operator*(int num)
{
    RationalNum n;
    n.numerator *= num;
    return n;
}
