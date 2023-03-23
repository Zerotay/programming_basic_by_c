#include <stdio.h>
int main(void) {
    int num1;
    int num2;
    int sum, diff, mul, div, mod;
    num1 = 20;
    num2 = 10;
    sum = num1 + num2;
    diff = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;
    printf("두수의 합: %d\n", sum);
    printf("두수의 차: %d\n", diff);
    printf("두수의 곱: %d\n", mul);
    printf("두수의 몫: %d\n", div);
    printf("두수의 나머지: %d\n", mod);
    return 0;
}