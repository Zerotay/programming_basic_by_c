#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0부터 99까지의 난수(실수형태)를 발생하여 크기가 3인 배열 p에 저장한다.
void getSensorData(double* p)
{
    double tmp;
    srand(time(0));
    for (int i = 0 ; i < 3; i++)
    {
        tmp = (rand() / (double)RAND_MAX) * 100;
        *(p+i) = tmp;
    }

    return;
}