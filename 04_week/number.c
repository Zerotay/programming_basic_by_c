#include <stdio.h>

int main()
{
    int dData,oData,xData;

    dData = 30; //10 진수
    oData = 030; // 8진수 Octal
    xData = 0x30; // 16진수 heXa

    // printf("%d %d %d", dData, oData, xData);
    // printf("dData(10진수) = %d \n", dData);
    // printf("dData(8진수) = 0%o \n", dData);
    // printf("dData(16진수) = 0x%x \n", dData);
    // printf("dData(16진수) = 0x%X \n", dData);


    // printf("oData(8진수) = 0%o \n", oData);
    // printf("oData(10진수) = %d \n", oData);
    // printf("oData(16진수) = 0x%X \n", oData);

    dData = 9;
    printf("dData(9): 0x%08X \n", dData);
    dData = -9;
    printf("dData(-9): 0x%08X \n", dData);

    char cData;
    cData = 65;
    printf("cData(65) : %c \n", cData);
    printf("cData(65) : %d \n", cData);
    printf("cData(65) : 0x%x \n", cData);




    return 0;
}