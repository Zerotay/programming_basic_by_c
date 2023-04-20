#include <stdio.h>

double epsil = 0.00001;
int n = 0;

double func(double x);
double funcdiff(double x);
double newton(double x);

int main()
{
    double curr, next, tmp;

    printf("초기값 ");
    scanf("%lf", &curr);
    printf("초기 추정치 : %lf\n", curr);
    do
    {
        next = curr - newton(curr);
        printf("%d번째 근사해 : %lf\n", n++, next);
        tmp = next < curr ? curr - next : next - curr;
        curr = next;

    }
    while (epsil <= tmp);
    printf("최종 근사해 : %lf\n", curr);
    return 0;
}

double func(double x)
{
    return (x * x)- (8 * x) + 14;
}

double funcdiff(double x)
{
    return 2 * x - 8;
}

double newton(double x)
{
    return func(x) / funcdiff(x);
}
