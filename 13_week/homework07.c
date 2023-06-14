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

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int l1, l2;
    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);

    while (1)
    {
        if (i == l1)
        {
            if (l1 == l2)
                return 0;
            return -1;
        }
        else if (i == l2)
        {
            if (l1 == l2)
                return 0;
            return 1;
        }

        if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return -1;
        i++;
    }
}
int main(void)
{
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);
    printf("%d\n", ft_strcmp(str1, str2));
    return 0;
}