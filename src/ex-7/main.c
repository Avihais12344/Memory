#include <stdio.h>
#include <stdint.h>
#include "../ex-3/rectangle.h"  //Rectangle.

#define ARRAY_SIZE 3

/**
 * @brief This function copies the first array to the second array.
 * The second array must be at least at the size of the first array.
 */
void charArrCopy(char* firstArr, char* secondArr, size_t arrSize) {
    // Another solution for this is memcopy, but because we want to learn here, I did it myself.
    for(size_t index = 0; index < arrSize; index++) {
        secondArr[index] = firstArr[index];
    }
}

int main(void){
    char firstArr[ARRAY_SIZE] = {1};
    char secondArr[ARRAY_SIZE] = {0};
    charArrCopy(firstArr, secondArr, ARRAY_SIZE);
    return 0;
}