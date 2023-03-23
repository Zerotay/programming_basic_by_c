#include <stdio.h>
int main(void) {
    double width;
    double height;
    double area;
    double perimeter;
    width = 10.0;
    height = 5.0;
    area = width * height;
    perimeter = 2 * (width + height);
    printf("사각형의 넓이: %lf\n", area);
    printf("사각형의 둘레: %lf\n", perimeter);
    return 0;
}