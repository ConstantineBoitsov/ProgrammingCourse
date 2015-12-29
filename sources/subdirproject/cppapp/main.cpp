#include <iostream>
#include "rat_num.h"

using namespace std;

int main()
{
    try
    {
        RationalNum Num;
        RationalNum Numb(1,8);
        Num.Multi(2);
        Num.Sum(1);
        Num.Divide(0);
        Num.Copy(Numb);
        cout << Numb.ToDouble() << endl;
    }
    catch(DevNull)
    {
        cout << "DevNull! Achtung! One does not simply divide by zero!\n";
    }

    return 0;
}

