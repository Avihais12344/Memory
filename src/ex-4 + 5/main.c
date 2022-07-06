#include <stdio.h>
#include <stdint.h>

#define ARRAY_SIZE 256

uint64_t fibonacci(uint64_t index)
{
    if(index == 0){
        return 0;
    }
    else if(index == 1){
        return 1;
    }
    uint64_t currentNumber = 1;
    uint64_t prevNumber = 0;
    for(uint64_t i = 2; i <= index; i++){
        uint64_t tempHolder = currentNumber;
        currentNumber += prevNumber;
        prevNumber = tempHolder;
    }
    return currentNumber;
}

void fillArrayWithFibonacci(uint64_t* array, size_t arraySize)
{
    for(size_t i = 0; i < arraySize; i++){
        array[i] = fibonacci(i);
    }
}

void printArray(uint64_t* array, size_t arraySize)
{
    for(size_t i = 0; i < arraySize; i++) {
        printf("%o", array[i]);
        if(i + 1 != arraySize)
        {
            printf(" ");
        }
    }
}

int main(void){
    uint64_t array[ARRAY_SIZE] = {0};
    fillArrayWithFibonacci(array, ARRAY_SIZE);
    printArray(array, ARRAY_SIZE);
    return 0;
}