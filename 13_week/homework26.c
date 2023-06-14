#include <stdio.h>
int main(void)
{
    char board[3][3];
    int x, y, k, i;
    int flag = 0;
    // 보드를 초기화한다.
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++) board[x][y] = ' ';
    // 사용자로부터 위치를 받아서 보드에 표시한다.
    for (k = 0; k < 9; k++) {
        flag = 0;
        printf("(x, y) 좌표: ");
        scanf(" %d %d", &x, &y);
        board[x][y] = 'O';
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (board[j][k] ==' ')
                {
                    board[j][k] = 'X';
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        for (i = 0; i < 3; i++) {
            printf("---|---|---\n");
            printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        }
        printf("---|---|---\n");
    }
    return 0;
}