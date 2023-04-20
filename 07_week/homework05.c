#include <stdio.h>
int get_integer();
int add(int x, int y);
int mul(int x, int y);
int main(void)
{
    int x = get_integer();
    int y = get_integer();
    int sum = add(x, y);
    int ans = mul(x,y);
    printf("합은 %d + %d = %d입니다. \n", x, y, sum);
    printf("곱은 %d * %d = %d입니다. \n", x, y, ans);
    return 0;
}
int get_integer()
{
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}
int add(int x, int y)
{
    return x + y;
}
int mul(int x, int y)
{
    return x * y;
}