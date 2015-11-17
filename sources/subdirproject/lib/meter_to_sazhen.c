#include "meter_to_sazhen.h"

void meter_to_sazhen(double length)
{
    double sajen, arshin, vershok;
    int int_arshin, int_sajen;

    vershok = length / (4.445 * 0.01);
    arshin = vershok / 16;
    int_arshin = (int)arshin;
    vershok = vershok - int_arshin * 16;
    sajen = int_arshin / 3;
    int_sajen = (int)sajen;
    int_arshin = int_arshin - int_sajen * 3;
    printf("%d sajen(s), %d arshin(s), %.1f vershok(s)\n", int_sajen, int_arshin, vershok);
}


