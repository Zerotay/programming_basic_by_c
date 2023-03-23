#include <stdio.h>

int main()
{
    printf("chapter5 prob 1 \n");
    char id[11];
    int ten = 0;
    int one = 0;
    scanf("%s", id);
    printf("%s \n", id);
    ten = (int)id[3] - 48;
    one = (int)id[4] - 48; // 실습 코드와 다르게 짜야 하는 듯.
    int year = ten * 10 + one;
    if ((id[0] == 'G' && year > 18) || (id[0] == 'U' && year > 13))
        printf("연락 대상입니다.\n");
    else
        printf("연락 대상이 아닙니다.\n");
    return 0;
}