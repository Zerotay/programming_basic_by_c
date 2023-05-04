#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    double rmse, mae;
    int score[10];
    int song[10];

    srand(time(0));
    for (int i = 0; i < 10; i++)
        score[i] = random() % 10;
    for (int i = 0; i < 10; i++)
        song[i] = random() % 10;
    printf("예측 배열\n");
    for (int i = 0; i < 10; i++)
        printf("%5d ", score[i]);
    printf("\n");
    printf("정답 배열\n");
    for (int i = 0; i < 10; i++)
        printf("%5d ", song[i]);
    printf("\n");

    rmse = 0;
    for (int i = 0; i < 10; i++)
        rmse  += (score[i] - song[i]) * (score[i] - song[i]);
    rmse /= 10;
    printf("rmse %lf\n", sqrt(rmse));

    mae = 0;
    for (int i = 0; i < 10; i++)
        mae  += abs(score[i] - song[i]);
    mae /= 10;
    printf("mae %lf\n", mae);
    return 0;
}