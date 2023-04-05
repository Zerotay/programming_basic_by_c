#include <stdio.h>

int main()
{
    int aNum;
    printf("정수 int 오버플로우일 때 출력 \n");
    printf("정수 int 범위는 -2147483648 ~ 2147483647 입니다 \n");
    printf("정수 aNum(%%i) 입력 :");
    scanf("%i", &aNum);

    printf("정수 aNum(%%i)은 %i입니다\n", aNum);
// 정상하고 아닌 케이스 세개
    return 0;
}