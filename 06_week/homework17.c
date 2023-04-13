#include <stdio.h>
int main(void)
{
    int dice1, dice2;

    for (int i  = 1; i < 7; i++)
        for (int j = 1; j < 7; j++)
            if (i + j == 6)
                printf("(%d, %d)\n", i,j);

    int a, b, c;
    for(a=1; a<=6; a++)
        for(b=1; b<=6; b++)
            for(c=1; c<=6; c++)
                if (a+b+c == 10)
                    printf("(%d, %d, %d)\n",a,b,c);
    return 0;
}