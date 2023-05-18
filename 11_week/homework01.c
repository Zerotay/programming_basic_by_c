// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    char ch[3][5];
    int tmp;
    srand(time(0));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j<5; j++)
            ch[i][j] = rand() % 26 + 65;
    printf("생성된 배열 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<5; j++)
            printf("%4c", ch[i][j]);
        printf("\n");
    }
    printf("배열의 주소 : \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j<5; j++)
            printf(" ch[%d][%d] =  %c , addr = %016X\n", i,j,ch[i][j], (ch + i * 5 + j));
    return 0;
}