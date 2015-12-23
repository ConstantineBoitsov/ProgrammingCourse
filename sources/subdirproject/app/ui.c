#include "ui.h"

void ui(void)
{
    puts("1. Meters to sazhens, arshins and vershoks.");
    puts("2. Brick to the hole.");
    puts("3. Mirror reflection of number.");
    puts("4. Matrix.");
    puts("5. Strings.");

    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        first_task_text();
        ui_meter_to_sazhen();
        break;
    case 2:
        second_task_text();
        ui_brick();
        break;
    case 3:
        third_task_text();
        ui_swapper();
        break;
    case 4:
        fourth_task_text();
        ui_matrix();
    case 5:
        fifth_task_text();
        ui_lower();
    }
}


