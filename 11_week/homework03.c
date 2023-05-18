// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void search(char *arr, char key);
int main(void)
{
    char ch[3][5];
    int tmp;
    char key;
    srand(time(0));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j<5; j++)
            ch[i][j] = rand() % 26 + 65;

    printf("생성된 배열 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<5; j++)
            printf("%4c", ch[i][j]);
        printf("\n");
    }
    printf("KEY 값 입력 : ");
    scanf("%c", &key);
    search(*ch, key);
    return 0;
}
void search(char *arr, char key)
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j<5; j++)
            if ((*(arr+ i * 5 + j) == key) && (flag = 1))
                printf("탐색 인덱스 = (%d행, %d열)\n", i+1, j+1);
    if (!flag)
        printf("탐색 인덱스 없음!\n");
}