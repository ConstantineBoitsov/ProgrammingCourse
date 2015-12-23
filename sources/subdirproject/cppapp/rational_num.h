#ifndef RATIONAL_NUM_H
#define RATIONAL_NUM_H

namespace Program 
{

    class Rational_num
    {
        int m;
        int n;
    public:
        Rational_num();
        void copy(int, int);
        void sum(int, int);
        void abstraction(int, int);
        void multiply(int,int);
        void division(int, int);
        double toDouble(int,int);
        ~Rational_num();

    };
    
}

#endif // RATIONAL_NUM_H
