// while 문을 이용한 합계 프로그램
#include <stdio.h>
int main(void) {
    int i, n, sum;
    sum = 0;
    n = 0;
    i = 0;
    printf("종료하려면 음수를 입력하시오 \n");
    while (n > -1) {
        printf("성적을 입력하시오: ");
        scanf("%d", &n);
        sum = sum + n;
        i++;
    }
    printf("성적의 평균은 %.2lf입니다.\n", (sum+1)/(double)(i-1));
    return 0;
}