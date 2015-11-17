#include "brick.h"

int brick(int length, int width, int height, int hole_lenght, int hole_width)
{
    return (((length < hole_lenght) && (width < hole_width)) | ((width < hole_lenght) && (length < hole_width)) | ((length < hole_lenght) && (height < hole_width)) |
            ((height < hole_lenght) && (length < hole_width)) | ((width < hole_lenght) && (height < hole_width)) | ((height < hole_lenght) && (width < hole_width)));
}

