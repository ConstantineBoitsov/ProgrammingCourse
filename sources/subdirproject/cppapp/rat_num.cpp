#include "rat_num.h"

RationalNumber::RationalNumber(int numer, int denom)
{
    numerator = numer;
    denominator = denom;
}

RationalNumber::RationalNumber(RationalNumber& x)
{
    numerator = x.numerator;
    denominator = x.denominator;
}

void RationalNumber::Sum(int num)
{
    numerator += num*denominator;
}

void RationalNumber::Multiple(int Num)
{
    numerator *= Num;
}

void RationalNumber::Divide(int Num)
{
    if (Num == 0)
    {
        DevNull error;
        throw error;
    }
    denominator *= Num;
}

double RationalNumber::ToDouble() const
{
    return((double)numerator / (double)denominator);
}

