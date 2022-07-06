#include <stdio.h>

void add(int* pNum, int incBy)
{
    *pNum += incBy;
}

int main(void){
    int num = 0;
    printf("num before = %d\n", num);
    add(&num, 3);
    printf("num after = %d\n", num);
    return 0;
}