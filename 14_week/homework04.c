// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define PI 3.141592
struct point {
    int x;
    int y;
};
struct circle {
    struct point p1; // 원의 중심
    double radius; //반지름
};
struct triangle {
    struct point p1; //삼각형의 중심점
    double height;
    double width;
};
int main()
{
    struct circle cir;
    struct triangle tri;
    printf("원의 중심 좌표를 입력하시오: ");
    scanf("%i %i", &cir.p1.x, &cir.p1.y);
    printf("원의 반지름을 입력하시오 : ");
    scanf("%lf", &cir.radius);
    printf("원의 중심 좌표는 ( %i, %i) 이고 넓이는 %.3lf 입니다.\n", cir.p1.x, cir.p1.y, cir.radius * cir.radius * PI);
    printf("삼각형의 중심 좌표를 입력하시오: ");
    scanf("%i %i", &tri.p1.x, &tri.p1.y);
    printf("삼각형의 높이와 밑변을 입력하시오 : ");
    scanf("%lf %lf", &tri.height, &tri.width);
    printf("원의 중심 좌표는 ( %i, %i) 이고 넓이는 %.3lf 입니다.\n", tri.p1.x, tri.p1.y, tri.height * tri.width * 0.5);
    return 0;
}