#include <stdio.h>

int main(){
    int num1;
    int num2;
    int sum;
    int sub;
    int mul;
    int div;
    int remainder;

    printf("num1 :");
    scanf("%d", &num1);
    printf("num2 :");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    remainder = num1 % num2;

    printf("integer operater\n");
    printf("%i + %i = %i\n", num1, num2, sum);
    printf("%i - %i = %i\n", num1, num2, sub);
    printf("%i * %i = %i\n", num1, num2, mul);
    printf("%i / %i = %i\n", num1, num2, div);
    printf("%i %% %i = %i\n", num1, num2, remainder);

    return 0;
}