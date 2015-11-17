#include "meter_to_sazhen.h"

void ui_meter_to_sazhen()
{
    double length;
    printf("Input the length in meters: ");
    scanf("%lf", &length);
    meter_to_sazhen(length);
}

