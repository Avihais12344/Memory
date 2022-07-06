#ifndef __RECTANGLE_H__ // Header guard.
#define __RECTANGLE_H__

typedef struct Rectangle {
  double length;
  double width;
} Rectangle;

double calculate_area_of_rectangle(const Rectangle *);

const Rectangle *get_rectangle_with_bigger_area(const Rectangle *r1,
                                                const Rectangle *r2);

unsigned short
can_rectangle_contain_rectangle(const Rectangle *rectangleToContain,
                                const Rectangle *rectangleToBeContained);

#endif // __RECTANGLE_H__