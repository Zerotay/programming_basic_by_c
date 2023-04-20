#include <stdio.h>

int main()
{
    int total, n, cost, quan;
    int sum = 0;

    scanf("%d", &total);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    while(n--)
    {
        scanf("%d %d", &cost, &quan);
        sum += cost * quan;
    }
    if (sum == total)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
