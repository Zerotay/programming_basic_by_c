#include <stdio.h>

int main()
{
    double sum, input, avg;
    int i = 0;

    sum = 0;
    do{
        scanf("%lf", &input);
        if (input < 0 || input > 10) continue;
        sum += input;
        i++;
    }
    while (input != 0);
    avg = sum / (i-1);
    if (avg < 3)
        printf("스즈메의 문단속 \n");
    else if (avg < 5)
        printf("에브리씽 에브리웨어 올앳 원스 \n");
    else
        printf("더 퍼스트 슬램덩크 \n");
    return 0;

}