#include "meter_to_sazhen.h"

SAV::SAV(int length)
{
    double d_sazhen, d_arshin;

    this->vershok = length / (4.445 * 0.01);
    d_arshin = this->vershok / 16;
    this->arshin = (int)arshin;
    this->vershok = this->vershok - this->arshin * 16;
    d_sazhen = this->arshin / 3;
    this->sazhen = (int)sazhen;
    this->arshin = this->arshin - this->sazhen * 3;
}

std::string SAV::Print()
{
    std::string result = boost::format("(%d) sazhen, (%d)arshin, (%.1f) vershok") % sazhen % arshin % vershok;
    return result;
}
