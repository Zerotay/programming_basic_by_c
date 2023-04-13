#include <stdio.h>

int main()
{
    int c;

    c = 0;
    if ((c == 0) && (c = 1))
        printf("good\n");
    if ((c == 1) && (c = 0))
        printf("bad\n");
    return 0;
}