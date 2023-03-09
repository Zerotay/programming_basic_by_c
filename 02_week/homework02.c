#include <stdio.h>

int main(){

    double num1;
    double num2;
    double sum;
    double sub;
    double mul;
    double div;

    printf("num1 :");
    scanf("%lf", &num1);
    printf("num2 :");
    scanf("%lf", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("float operation\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, sum);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, sub);
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, mul);
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, div);


    return 0;
}
    // double dGrade;
    // dGrade = 56.98;
    // float fGrade;
    // fGrade = 78.78;

    // printf("dGrade = %lf \n", dGrade);
    // printf("fGrade = %f \n", fGrade);

    // printf("size of double = %d \n", sizeof(double)); // 자료형의 사이즈 측정
    // printf("size of dGrade = %d \n", sizeof(dGrade)); // 변수의 사이즈 측정
    // printf("size of 56.98 = %d \n", sizeof(56.98)); // 데이터의 사이즈 측정

    // printf("size of 56.98f = %d \n", sizeof(56.98f)); // 뒤에 F를 붙여서 원하는 자료형 범위를 알려줄 수도 있다.
    // 대문자든 소문자든 상관없다. 숫자 뒤에 이 놈이 어떤 자료형인지 명시하는 것이 가능하다.
    // 앞에 0이나 0x를 붙여서 8진수, 16진수를 표현하는 것과 같은 원리이다!
    // 숫자 앞 문자는 진수, 숫자 뒤 문자는 사이즈를 의미한다.