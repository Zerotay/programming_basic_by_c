#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void disp_car(int car_number, int distance);
int main(void)
{
    int i;
    char tmp;
    int car1_dist=0, car2_dist=0;
    int car3_dist=0;
    srand( (unsigned)time( NULL ) );
    for( i = 0; i < 6; i++ ) {
        car1_dist += rand() % 100;
        car2_dist += rand() % 100;
        car3_dist += rand() % 100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        disp_car(3, car3_dist);
        scanf("%c", &tmp);
        printf("---------------------\n");
    }
    return 0;
}
void disp_car(int car_number, int distance)
{
    int i;
    printf("CAR #%d:", car_number);
    for( i = 0; i < distance/10; i++ ) {
        printf("*");
    }
    printf("\n");
}