// 재귀적인 팩토리얼 함수 계산
#include <stdio.h>
long factorial(int n)
{
    printf("factorial(%d)\n", n);
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}