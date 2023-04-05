#include <stdio.h>

// int main()
// {
//     double dNum;
//     dNum = 456123456.23123445623;

//     printf("dNum(%%lf) = %lf \n", dNum);

//     printf("dNum(%%.11lf) = %.11lf \n", dNum);
//     printf("dNum(%%e) = %e \n", dNum);
//     printf("dNum(%%.17E) = %.17E \n", dNum);
//     return 0;
// }
int main()
{
    double aNum;

    printf("실수 (double) 오버플로우 일 때 출력\n");
    printf("실수 double 범위는 +-2.22507 * 10^-308 ~ +-1.79769 * 10^+308 입니다 \n");
    printf("실수 aNum (%%lf)입력 :");
    scanf("%lf", &aNum);

    printf("실수 aNum은(%%E) %E입니다\n", aNum);
    return 0;
}