#include <stdio.h>

int main()
{
    double  negative_slope;
    int a;
    int small, big;
    double y1, y2;
    printf("negative slope: ");
    scanf("%lf", &negative_slope);
    printf("a: ");
    scanf("%i", &a);
    printf("small: ");
    scanf("%i", &small);
    printf("big: ");
    scanf("%i", &big);

    y1 = ((small >= a) ? (double)(small - a) : negative_slope * (small - a));
    printf("%d : %.2lf\n", small, y1);

    y2 = ((big >= a) ? (double)(big - a) : negative_slope * (big - a));
    printf("%d : %.2lf\n", big, y2);

    return 0;
}