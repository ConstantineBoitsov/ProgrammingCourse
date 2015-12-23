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

void fourth_task_text()
{
    printf("\nВ матрице X(m,n) каждый элемент (кроме граничных) \nзаменить суммой непосредственно примыкающих к нему \nэлементов по вертикали, горизонтали и диагоналям.\n");
}
