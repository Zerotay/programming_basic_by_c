#include <stdio.h>

int max(int x, int y);
int min(int x, int y);

int main(void)
{
    int x, y, larger, smaller;
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);
    larger = max(x, y);
    smaller = min(x,y);

    printf("최대값 %d\n", larger);
    printf("최소값 %d\n", smaller);
    return 0;
}

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}