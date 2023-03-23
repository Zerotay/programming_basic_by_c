#include <stdio.h>

int main()
{
    printf("chapter5 prob 3\n");
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    b = ~ b + 1;
    a = a + b;

    printf("%d", a);
    return 0;
}