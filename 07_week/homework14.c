#include <math.h>
#include <stdio.h>
double tree_height(double deg, double dist, double h);

int main(void)
{
    double height, distance, degrees, radians;
    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance);
    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);
    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);
    printf("나무의 높이(단위는 미터): %lf \n", tree_height(degrees, distance, height));
    return 0;
}

double tree_height(double deg, double dist, double h)
{
    double radians, tree;
    radians = deg * (3.141592 / 180.0);
    tree = tan(radians) * dist + h;
    return tree;
}