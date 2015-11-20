#ifndef RATIONAL_NUM_H
#define RATIONAL_NUM_H


class rational_num
{
public:
    rational_num();
    ~rational_num();
    void copy(int, int);
    void sum(int, int);
    void abstraction(int, int);
    void multiply(int,int);
    void division(int, int);
    double toDouble(int,int);

};

#endif // RATIONAL_NUM_H
