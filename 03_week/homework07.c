#include <stdio.h>
int main(void) {
    double width, height, area, perimeter;
    printf("너비를 입력하시오\n");
    scanf("%lf", &width);
    printf("높이를 입력하시오\n");
    scanf("%lf", &height);
    area = width * height;
    perimeter = 2 * (width + height);
    printf("사각형의 넓이: %lf\n사각형의 둘레: %lf\n", area, perimeter);
    return 0;
}