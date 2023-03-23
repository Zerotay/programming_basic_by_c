#include <stdio.h>
int main(void)
{
    double f_temp;
    double c_temp;
    printf("화씨온도를 입력하시오");
    scanf("%lf", &f_temp);
    c_temp = (double)5 / 9 * (f_temp - 32);
    // (double)을 없애고도해보기
    printf("섭씨온도는 %f입니다", c_temp);
    return 0;
}