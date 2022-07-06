#include <stdio.h>
#include <stdint.h>
#include "../ex-3/rectangle.h"  //Rectangle.

#define ARRAY_SIZE 3
#define NOT_EQUAL 0
#define EQUAL 1

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

unsigned char charArrCompare(char* firstArr, 
                    char* secondArr, 
                    size_t firstArrSize,
                    size_t secondArrSize) 
{
    // Could use here memcopy, but because we want to learn here, I did it myself.
    if(firstArrSize != secondArrSize) {
        return NOT_EQUAL;
    }
    for(size_t index = 0; index < firstArrSize; index++) {
        if(firstArr[index] != secondArr[index]) {
            return NOT_EQUAL;
        }
    }
    return EQUAL;
}

void charArrSetValues(char* charArr,
                    size_t charArrSize,
                    char valueToSet)
{
    // Could use memset here, but because we want to learn here, I did it myself.
    for(size_t index = 0; index < charArrSize; index++) {
        charArr[index] = valueToSet;
    }
}

int main(void){
    char firstArr[ARRAY_SIZE] = {1};
    char secondArr[ARRAY_SIZE] = {0};
    // Original solution.
    // charArrCopy(firstArr, secondArr, ARRAY_SIZE);
    // We can also do this.
    charArrCopy(firstArr, secondArr, sizeof(firstArr));
    printf("Are the arrays equal: %s", charArrCompare(firstArr, secondArr, ARRAY_SIZE, ARRAY_SIZE) == EQUAL ? "true" : "false");
    charArrSetValues(secondArr, ARRAY_SIZE, 0);
    return 0;
}