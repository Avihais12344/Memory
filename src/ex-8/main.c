#include <stdio.h>
#include <stdint.h>

#define BUFFER_SIZE 512

void copyFile(FILE* sourceFile, FILE* destFile)
{
    if(sourceFile == NULL || destFile == NULL)
    {
        return;
    }
    unsigned char tempBuffer[BUFFER_SIZE];
    size_t numCharsReaden = 0;
    do{
        numCharsReaden = fread(tempBuffer, sizeof(unsigned char), BUFFER_SIZE, sourceFile);
        if(numCharsReaden == 0)
        {
            break;
        }
        fwrite(tempBuffer, sizeof(unsigned char), numCharsReaden, destFile);
    }while(numCharsReaden <= BUFFER_SIZE);
}

int main(void){
    FILE* sourceFile = fopen("source.txt", "r");
    FILE* destFile = fopen("dest.txt", "w");
    copyFile(sourceFile, destFile);
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}