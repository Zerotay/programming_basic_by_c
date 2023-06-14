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

int ft_strstr(char *s1, char *s2)
{
    int l1,l2;
    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);
    if (l1 == l2)
        if (ft_strcmp(s1,s2))
            return -1;
        else
            return 1;
    else if (l1 > l2)
    {
        for (int i = 0; i < l1; i++)
        {
            int j;
            for (j = 0; i < l2; j++)
                if (i+j == l1 || s1[i+j] != s2[j])
                    break;
            if (j == l2)
                return 1;
        }
        return -1;
    }
    else
    {
        for (int i = 0; i < l2; i++)
        {
            int j;
            for (j = 0; i < l1; j++)
                if (i+j == l2 || s2[i+j] != s1[j])
                    break;
            if (j == l1)
                return 1;
        }
        return -1;
    }
}
int main(void)
{
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);
    printf("%d\n", ft_strstr(str1, str2));
    return 0;
}