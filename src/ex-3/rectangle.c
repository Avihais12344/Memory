#include "rectangle.h"

// stdbool.h deprecated in C23
#define false 0
#define true !false

double calculate_area_of_rectangle(const Rectangle *rect)
{
    return rect->length * rect->width;
}

const Rectangle *get_rectangle_with_bigger_area(const Rectangle *r1,
                                                const Rectangle *r2)
{
    double r1Area = calculate_area_of_rectangle(r1);
    double r2Area = calculate_area_of_rectangle(r2);
    return r1Area > r2Area ? r1 : r2;
}

unsigned short
can_rectangle_contain_rectangle(const Rectangle *rectangleToContain,
                                const Rectangle *rectangleToBeContained)
{
    unsigned short isLengthBigger = rectangleToContain->length > rectangleToBeContained->length || rectangleToContain->length > rectangleToBeContained->width;
    unsigned short isLengthToWidth = rectangleToContain->length > rectangleToBeContained->length ? false : 
    (rectangleToContain->length > rectangleToBeContained->width ? true : false);
    unsigned short isWidthBigger = rectangleToContain->width > (isLengthToWidth ? rectangleToBeContained->length : rectangleToBeContained->width);
    return get_rectangle_with_bigger_area(rectangleToContain, rectangleToBeContained) == rectangleToContain && isLengthBigger && isWidthBigger;
}