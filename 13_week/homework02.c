// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct merchandise
{
    char number[21];
    char name[21];
    unsigned int price;
    char option[21];

} mer;

int main()
{
    mer one;

    printf("번호 : ");
    gets(one.number);
    printf("이름 : ");
    gets(one.name);
    printf("가격: ");
    scanf("%u", &one.price);
    getchar();
    printf("옵션: ");
    gets(one.option);

    printf("코드는 %s이고 %s으로 %d 만원, 옵션은 %s입니다.\n", one.number, one.name, one.price / 10000, one.option);

    return 0;
}