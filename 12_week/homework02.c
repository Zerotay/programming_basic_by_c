// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[29+1];
    int ans=0;
    int len;

    printf("입력 문자열 : ");
    gets(text);
    len = strlen(text);
    printf("len %i\n", len);
    for (int i = 0; text[i]; i++)
    {
        if (text[i] == 'a' || text[i] == 'e'|| text[i] == 'i'|| text[i] == 'o'|| text[i] == 'u'
        || text[i] == 'A'|| text[i] == 'E'|| text[i] == 'I'|| text[i] == 'O'|| text[i] == 'U')
            ans++;
    }
    printf("출력 문자열 : ");
    for (int i = 0; text[i]; i++)
    {
        if (isupper(text[i]))
            printf("%c",tolower(text[i]));
        else if (islower(text[i]))
            printf("%c",toupper(text[i]));
        else
            printf("%c", text[i]);
    }
    printf("\n");
    printf("모음의 개수 : %i\n", ans);
    printf("문자열 역순 출력 : ");
    for (int i = strlen(text)-1; i>-1; i--)
        printf("%c",text[i]);
    printf("\n");

    return 0;
}