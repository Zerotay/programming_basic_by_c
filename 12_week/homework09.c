#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    int i,j;

    gets(str);
    i = 0;
    j = strlen(str)-1;
    while (i < j)
    {
        if (str[i++] != str[j--])
        {
            printf("%s는 회문이 아닙니다.\n", str);
            return 0;
        }
    }
    printf("%s는 회문입니다.\n", str);
    return 0;
}