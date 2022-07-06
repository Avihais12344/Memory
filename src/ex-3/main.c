#include <stdio.h>
#include "rectangle.h"

void initializeRect(Rectangle* pRect, double length, double width)
{
    pRect->width = width;
    pRect->length = length;
}

int main(void){
    Rectangle rect;
    initializeRect(&rect, 5, 7);
    printf("Legnth %f Width %f\n", rect.length, rect.width);
    return 0;
}