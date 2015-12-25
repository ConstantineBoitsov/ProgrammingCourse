#include "ui_swapper.h"
#include "swapper.h"

void ui_swapper()
{
    int number_to_swap;
    printf("\nInput the number to turn over: ");
    scanf("%d", &number_to_swap);
    printf("\nThe turnover: %d\n\n", swapper(number_to_swap));
}

void third_task_text()
{
    printf("\nПоменять порядок цифр заданного натурального числа на обратный.\nПример: 7283916 > 6193827.\nСтроковые функции не использовать.\n");
}
