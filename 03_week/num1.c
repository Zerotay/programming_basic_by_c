#include <stdio.h>

int main(){
    // 정수 변수 2개 선언.
    int iDataA, iDataB;
    int sum, cha, gob, mok, nam;
    //키보드 입력.
    printf("int iDataA : ");
    scanf("%i", &iDataA); //sdl 검사를 한다면 여기에서 경고를 일으킬 것이다.
    printf("int iDataB : ");
    scanf("%i", &iDataB); //sdl 검사를 한다면 여기에서 경고를 일으킬 것이다.

    sum = iDataA + iDataB;
    cha = iDataA - iDataB;
    gob = iDataA * iDataB;
    mok = iDataA / iDataB;
    nam = iDataA % iDataB;

    printf("%i + %i = %i \n", iDataA, iDataB, sum);
    printf("%i - %i = %i \n", iDataA, iDataB, cha);
    printf("%i * %i = %i \n", iDataA, iDataB, gob);
    printf("%i / %i = %i \n", iDataA, iDataB, mok);
    printf("%i %% %i = %i \n", iDataA, iDataB, nam);

    double dDataA, dDataB;
    double dSum, dCha, dGob, dMok;

    printf("double dDataA : ");
    scanf("%lf", &dDataA);
    printf("double dDataB : ");
    scanf("%lf", &dDataB);

    dSum = dDataA + dDataB;
    dCha = dDataA - dDataB;
    dGob = dDataA * dDataB;
    dMok = dDataA / dDataB;

    printf("%.3lf + %.3lf = %.3lf\n", dDataA, dDataB, dSum);
    printf("%.3lf - %.3lf = %.3lf\n", dDataA, dDataB, dCha);
    printf("%.3lf * %.3lf = %.3lf\n", dDataA, dDataB, dGob);
    printf("%.3lf / %.3lf = %.3lf\n", dDataA, dDataB, dMok);
    return 0;
}