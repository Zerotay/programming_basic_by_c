#include <stdio.h>

int main()
{
    unsigned int aNum;
    printf("정수 int 오버플로우일 때 출력 \n");
    printf("정수 int 범위는 0 ~ 4294967295 입니다 \n");
    printf("정수 aNum (%%u)입력 :");
    scanf("%u", &aNum);

    printf("정수 aNum(%%u)은 %u입니다\n", aNum);
// 정상하고 아닌 케이스 해서 총 세개
    return 0;
}