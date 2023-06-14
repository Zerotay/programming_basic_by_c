#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void mul(int arr1[3][3], int arr2[3][3]);
void pro(int arr1[3][3], int arr2[3][3]);
void sub(int arr1[3][3], int arr2[3][3]);
void add(int arr1[3][3], int arr2[3][3]);

int main()
{
    int arr1[3][3], arr2[3][3];
    int tmp;
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tmp = rand() % 10;
            arr1[i][j] = tmp;
            tmp = rand() % 10;
            arr2[i][j] = tmp;
        }
    }
    printf("arr1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%6d", arr1[i][j]);
        printf("\n");
    }
    printf("arr2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%6d", arr2[i][j]);
        printf("\n");
    }
    printf("덧셈\n");
    add(arr1,arr2);
    printf("뺄셈\n");
    sub(arr1,arr2);
    printf("행렬곱\n");
    mul(arr1, arr2);
    printf("product\n");
    pro(arr1,arr2);
    return 0;
}
void add(int arr1[3][3], int arr2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%6d", arr1[i][j] + arr2[i][j]);
        printf("\n");
    }
}
void sub(int arr1[3][3], int arr2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%6d", arr1[i][j] - arr2[i][j]);
        printf("\n");
    }
}
void pro(int arr1[3][3], int arr2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%6d", arr1[i][j] * arr2[i][j]);
        printf("\n");
    }
}

void mul(int arr1[3][3], int arr2[3][3])
{
    int arr3[3][3] ={0,};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                arr3[i][j] += arr1[i][k] * arr2[k][j];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%6d", arr3[i][j]);
        printf("\n");
    }
}