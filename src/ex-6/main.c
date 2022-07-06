#include <stdio.h>
#include <stdint.h>
#include "../ex-3/rectangle.h"  //Rectangle.

#define ARRAY_SIZE 3

void printRects(Rectangle *rects, size_t numRectangles) {
    for(size_t index = 0; index < numRectangles; index++) {
        printf("Rectangle %o:\n", index);
        printf("\tWidth = %f\n", rects[index].width);
        printf("\tHeight = %f\n", rects[index].length);
        putchar('\n');
    }
}

int main(void){
    Rectangle array[ARRAY_SIZE] = {{5, 5}, {7, 7}, {9.5, 20}};
    printRects(array, ARRAY_SIZE);
    return 0;
}