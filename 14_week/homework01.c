#include <stdio.h>
// #include <conio.h>

int main()
{
    int ch;
    while ((ch= _getch()) != 'q')
        // printf("%c",ch);
        // putchar(ch);
        _putch(ch);
    return 0;
}