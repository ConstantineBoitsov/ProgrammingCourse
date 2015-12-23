#include "lower.h"

void lower_case(char * str)
{
    int i;
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
        {
            i++;
            if (str[i] == ' ')
                i++;
        }
        else
            str[i] = tolower(str[i]);
    }
}
