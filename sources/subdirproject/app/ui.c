#include "ui.h"
#include "ui_brick.h"
#include "ui_matrix.h"
#include "ui_meter_to_sazhen.h"
#include "ui_swapper.h"

void ui(void)
{
    puts("1. Выражение длины в метрах через сажени, аршины и вершки.");
    puts("2. Кирпич и отверстие.");
    puts("3. Зеркальное отражение числа.");
    puts("4. Матрицы.");

    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        ui_meter_to_sazhen();
        break;
    case 2:
        ui_brick();
        break;
    case 3:
        ui_swapper();
        break;
    case 4:
        ui_matrix();
    }
}

