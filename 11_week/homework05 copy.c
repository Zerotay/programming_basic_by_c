#include <stdio.h>
// 기울기와 y절편을계산

int get_line_parameter(int x1, int y1, int x2, int y2, double *slope, double *yintercept)
{
    if( x1 == x2 )
        return -1;
    else {
        *slope = (double)(y2 - y1)/(double)(x2 - x1);
        *yintercept = y1 - (*slope)*x1;
        return 0;
    }
}