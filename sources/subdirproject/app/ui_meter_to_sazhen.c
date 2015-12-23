#include "meter_to_sazhen.h"

void ui_meter_to_sazhen()
{
    double length;
    printf("\nInput the length in meters: ");
    scanf("%lf", &length);
    meter_to_sazhen(length);
}

void first_task_text()
{
    printf("\nПользователь задает длину отрезка в метрах (например, 19).\n Вывести длину того же отрезка в саженях, аршинах и вершках \n(например, 8 саженей 2 аршина 11.4 вершка).\n1 сажень = 3 аршина = 48 вершков, 1 вершок = 4.445 см.\n");
}
