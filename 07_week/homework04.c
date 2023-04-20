// 사용자로부터 정수를 받는 함수
#include <stdio.h>
int get_integer(void)
{
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int main()
{
    int ans ;

    ans = get_integer();
    printf("%d\n", ans);
    return 0;
}