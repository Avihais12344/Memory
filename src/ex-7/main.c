#include <stdio.h>
#include <stdint.h>

#define ARRAY_SIZE 4
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

/**
 * @brief This function swaps the content of the 2 arrays.
 * They both must be at least the size of arrSize.
 */
void charArrSwap(char* firstArr,
                char* secondArr,
                size_t arrSize)
{
    for(size_t index = 0; index < arrSize; index++)
    {
        char tempVal = firstArr[index];
        firstArr[index] = secondArr[index];
        secondArr[index] = tempVal;
    }
}

void printArr(char* arr, size_t size)
{
    for(size_t index = 0; index < size; index++)
    {
        printf("%d", arr[index]);
        putchar(' ');
    }
}

int main(void){
    // Exercise F:
    char charArr[ARRAY_SIZE];
    // set one half to hold the value 0, and the other half to hold the value 1.
    charArrSetValues(charArr, sizeof(char) * (ARRAY_SIZE / 2), 0);
    charArrSetValues(charArr + ARRAY_SIZE / 2, (sizeof(char) * ARRAY_SIZE / 2), 1);
    printf("Before: ");
    printArr(charArr, ARRAY_SIZE);
    putchar('\n');
    charArrSwap(charArr, charArr + ARRAY_SIZE / 2, (sizeof(char) * ARRAY_SIZE / 2));
    printf("After: ");
    printArr(charArr, ARRAY_SIZE);
    putchar('\n');
    return 0;
}