#include "swapper.h"

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
