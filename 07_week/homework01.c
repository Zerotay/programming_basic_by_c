#include <stdio.h>

void print_stars();

int main(){
    print_stars();
    printf("\n시립대 2016640001 김동건\n");
    print_stars();
    printf("\n");
    return 0;
}

void print_stars()
{
    for (int i  = 0; i < 30; i++)
        printf("*");
}