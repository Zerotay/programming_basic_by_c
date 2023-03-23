#include <stdio.h>

int main(){
    int aData, bData, temp;
    aData = 9;
    bData = 20;

    printf("aData(9) 0x%08x \n", aData);
    printf("bData(20) 0x%08x \n", bData);

    temp = aData & bData;
    printf("temp: 0x%08X \n", temp);
    temp = aData | bData;
    printf("temp: 0x%08X \n", temp);
    temp = aData << 2;
    printf("temp: 0x%08X \n", temp);
    temp = bData >> 2;
    printf("temp: 0x%08X \n", temp);

    return 0;
}