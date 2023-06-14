// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[40];
    unsigned int digit[40];
    unsigned int ans=0;
    int len;
    int mul=1;

    printf("2진수 입력(32자리 이하) : ");
    gets(text);
    len = strlen(text);
    for (int i = strlen(text)-1; i>-1; i--)
    {
        digit[i] = text[i] - 48;
        ans += digit[i] * mul;
        mul *= 2;
    }
    printf("%s = %d", text, ans);
    printf("\n");

    return 0;
}