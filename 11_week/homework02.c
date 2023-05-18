// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int num[100];
    int sum[2] = {0,};
    int tmp;
    srand(time(0));
    for (int i = 0; i < 100; i++)
        num[i] = rand() % 100;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tmp = i*10 + j;
            printf("num[%03d]=%3d ", tmp, num[tmp]);
            sum[tmp%2] += num[tmp];
        }
        printf("\n");
    }
    printf("짝수 인덱스 합계 : %d, 홀수 인덱스 : %d\n", sum[0], sum[1]);
    return 0;
}