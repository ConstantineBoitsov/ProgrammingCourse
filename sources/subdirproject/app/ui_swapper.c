#include "ui_swapper.h"
#include "swapper.h"

void ui_swapper()
{
    int number_to_swap;
    printf("\nInput the number to turn over: ");
    scanf("%d", &number_to_swap);
    printf("\nThe turnover: %d\n\n", swapper(number_to_swap));
}


int swapper(int number_to_swap)
{
   int swapped_number = 0;
   while ( number_to_swap != 0)
   {
      swapped_number *= 10;
      swapped_number += number_to_swap % 10;
      number_to_swap = number_to_swap / 10;
   }

   return swapped_number;
}

void third_task_text()
{
    printf("\nПоменять порядок цифр заданного натурального числа на обратный.\nПример: 7283916 > 6193827.\nСтроковые функции не использовать.\n");
}
