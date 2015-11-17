#include "ui_brick.h"
#include "brick.h"

void ui_brick()
{
    int length, width, height;
    input_abc(&length, &width, &height);
    int hole_lenght, hole_width;
    input_hole(&hole_lenght, &hole_width);
    if (brick(length, width, height, hole_lenght, hole_width))
        printf("Success.\n");
    else
        printf("Unsuccess.\n");
}

void input_abc(int * a, int * b, int * c)
{
    printf("Input dimensions of the brick:\n");
    scanf("%d %d %d", a, b, c);
}

void input_hole(int * r, int * s)
{
    printf("Input dimensions of the hole:\n");
    scanf("%d %d", r, s);
}

