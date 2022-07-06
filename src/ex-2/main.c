#include <stdio.h>

void swap(int* pNum1, int* pNum2)
{
    int temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;
}

int main(void){
    int num1 = 1, num2 = 5;
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}