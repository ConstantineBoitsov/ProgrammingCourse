#include "matrix.h"

void matrix(int coloumns, int rows)
{
    FILE *myfile = fopen("myfile", "r");
    if (myfile == NULL)
    {
        puts("Error file!");
        exit(1);
    }

    int * matrix[rows];
    int i;
    for (i = 0; i < rows; i++)
    {
        matrix[i] = (int*)malloc(sizeof(int)*coloumns);
    }

    int m, n;
    for(m = 0; m < rows; m++)
    {
        for (n = 0; n < coloumns; n++)
        {
            fscanf(myfile, "%d", &matrix[m][n]);
            printf("%2d ", matrix[m][n]);
        }
    printf("\n");
    }
    printf("\n");

    int * post_matrix[rows];
    for (i = 0; i < rows; i++)
    {
        post_matrix[i] = (int*)malloc(sizeof(int)*coloumns);
    }


    for(m = 0; m < rows; m++)
    {
        for (n = 0; n < coloumns; n++)
        {
            if ((m == 0) || (m == coloumns-1) || (n == 0) || (n == coloumns-1))
                    post_matrix[m][n] = matrix[m][n];
            else
                    post_matrix[m][n] = matrix[m-1][n-1] + matrix[m-1][n] + matrix[m][n-1] + matrix[m-1][n+1] + matrix[m+1][n-1] + matrix[m+1][n] + matrix[m][n+1] + matrix[m+1][n+1];
            printf("%2d ", post_matrix[m][n]);
        }
        printf("\n");
    }

    fclose(myfile);
    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
        free(post_matrix[i]);
    }
    free(matrix);
    free(post_matrix);
}

