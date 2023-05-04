#include <stdio.h>
int main(void)
{
    char board[3][3];
    int x, y, k, i;
    // 보드를 초기화한다.
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++) board[x][y] = ' ';
    // 사용자로부터 위치를 받아서 보드에 표시한다.
    for (k = 0; k < 9; k++) {
        printf("(x, y) 좌표: ");
        scanf(" %d %d", &x, &y);
        board[x][y] = (k % 2 == 0) ? 'X' : 'O';
        for (i = 0; i < 3; i++) {
            printf("---|---|---\n");
            printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        }
        printf("---|---|---\n");
        for (int j = 0; j < 3; j++)
        {
            int tmp = board[j][0];
            int flag = 1;
            if (tmp == ' ')
                break;
            for (int k = 1; k < 3; k++)
                if (tmp != board[j][k])
                    flag = 0;
            if (flag)
            {
                printf("anyway game ends 1\n");
                return 0;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            int tmp = board[0][j];
            int flag = 1;
            if (tmp == ' ')
                break;
            for (int k = 1; k < 3; k++)
                if (tmp != board[k][j])
                    flag = 0;
            if (flag)
            {
                printf("anyway game ends 2\n");
                return 0;
            }
        }
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        {
            printf("anyway game ends 3\n");
            return 0;
        }
        if (board[2][0] != ' ' && board[2][0] == board[1][1] && board[2][0] == board[0][2])
        {
            printf("anyway game ends 4\n");
            return 0;
        }
    }
    return 0;
}