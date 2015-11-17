#include "ui_matrix.h"
#include "matrix.h"
void ui_matrix()
{
    int coloumns, rows;
    puts("Enter coloumns: ");
    scanf("%d", &coloumns);
    puts("Enter rows: ");
    scanf("%d", &rows);
    printf("\n");
    matrix(coloumns, rows);
}
