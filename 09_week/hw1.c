#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tmp;
    int score[10];
    int song[10];

    srand(time(0));
    for (int i = 0; i < 10; i++)
        score[i] = random() % 10 + 90;
    for (int i = 0; i < 10; i++)
        song[i] = random() % 4;
    printf("점수 배열\n");
    for (int i = 0; i < 10; i++)
        printf("%5d ", score[i]);
    printf("\n");
    printf("노래 배열\n");
    for (int i = 0; i < 10; i++)
        printf("%5d ", song[i]);
    printf("\n");
    tmp = 0;
    for (int i = 0; i < 10; i++)
    {
        if (song[i] == tmp || i < 9 && song[i] == song[i+1])
            printf("대결");
        else if (score[i] >95 && score[i] < 100)
            printf("기절");
        else
            printf("노래");
        if (i != 10)
            printf(", ");
        tmp = song[i];
    }
    return 0;
}