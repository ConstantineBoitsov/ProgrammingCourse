#ifndef METER_TO_SAZHEN
#define METER_TO_SAZHEN
#include "stdio.h"
#include <string>

#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>
using namespace std;
using namespace boost;

class SAV
{
private:
    int sazhen;
    int arshin;
    double vershok;
public:
    SAV(int length);
    std::string Print();
};

#endif // METER_TO_SAZHEN

