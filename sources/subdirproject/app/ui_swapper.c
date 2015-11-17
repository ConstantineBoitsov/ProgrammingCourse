#include "ui_swapper.h"
#include "swapper.h"

void ui_swapper()
{
    int number_to_swap;
    printf("Input the number to turn over: ");
    scanf("%d", &number_to_swap);
    printf("The turnover: %d\n", swapper(number_to_swap));
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
