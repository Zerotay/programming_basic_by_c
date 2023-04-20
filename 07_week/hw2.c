#include <stdio.h>

int main()
{
    int count = 0;
    char str[50];
    scanf("%[^\n]s", str);
    for (int i = 0; str[i]; i++)
        if (str[i] == 'h' && i != 50 && str[i+1] == 'a')
            count++;
    printf("%d\n", count);
    return 0;
}