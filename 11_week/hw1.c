#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10][10];
    int min = 201;
    int max = 0;
    int tmp, newmax, newmin;

    srand(time(0));

    printf("max, min 입력하시오\n");
    scanf("%d %d", &newmax, &newmin);
    printf("** 원본 이미지 **\n");
    for (int i = 0; i < 10;i++)
    {
        for (int j = 0; j<10;j++)
        {
            tmp = (rand() % 100) + 100;
            arr[i][j] = tmp;
            if (min > tmp)
                min = tmp;
            if (max < tmp)
                max = tmp;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("min: %d, max: %d\n", min, max);

    tmp = (newmax - newmin) / (max - min);
    printf("** 노말라이징된 이미지 **\n");
    for (int i = 0; i < 10;i++)
    {
        for (int j = 0; j<10;j++)
        {
            arr[i][j] = (arr[i][j] - min) * tmp + newmin;
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}