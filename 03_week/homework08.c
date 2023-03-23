#include <stdio.h>
int main(void){
    int num1, num2, num3, sum;
    printf("3개의 정수를 입력하세요 (num1, num2, num3): ");
    scanf("%d %d %d", &num1, &num2, &num3);
    sum = 0; //초기화를 해주어 쓰레기값을 사용하지 않도록 한다.
    sum += num1;
    sum += num2;
    sum += num3;
    printf("3개 정수의 합은 %d\n", sum);
    return 0;
}