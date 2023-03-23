#include<stdio.h>
int main(void)
{
    int num;
    printf("십진수: ");
    scanf("%i", &num);
    unsigned int mask = 1 << 7; // mask = 10000000
    printf("이진수: ");
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;// 오른쪽으로 1비트 이동한다.
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;// 오른쪽으로 1비트 이동한다.
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;// 오른쪽으로 1비트 이동한다.
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    printf("\n");

    mask = 1 << 31;
    printf("16진수: ");
    for (int j = 0; j < 32; j++)
    {
        ((num & mask) == 0) ? printf("0") : printf("1");
        mask = mask >> 1;
        if ((j+1) % 4 == 0)
            printf(" ");
    }
    return 0;
}