#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}
int main(void)
{
    char str[100];

    gets(str);
    printf("%d\n", ft_strlen(str));
    return 0;
}