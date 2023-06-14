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
    mer multi[3];

    printf("번호[0] : ");
    gets(multi[0].number);
    printf("이름[0] : ");
    gets(multi[0].name);
    printf("가격[0] : ");
    scanf("%u", &multi[0].price);
    getchar();
    printf("옵션[0] : ");
    gets(multi[0].option);

    printf("번호[1] : ");
    gets(multi[1].number);
    printf("이름[1] : ");
    gets(multi[1].name);
    printf("가격[1] : ");
    scanf("%u", &multi[1].price);
    getchar();
    printf("옵션[1] : ");
    gets(multi[1].option);

    printf("번호[2] : ");
    gets(multi[2].number);
    printf("이름[2] : ");
    gets(multi[2].name);
    printf("가격[2] : ");
    scanf("%u", &multi[2].price);
    getchar();
    printf("옵션[2] : ");
    gets(multi[2].option);


    printf("주문하신 상품은 3개입니다.\n");

    printf("코드는 %s이고 %s으로 %d 만원, 옵션은 %s입니다.\n", multi[0].number, multi[0].name, multi[0].price / 10000, multi[0].option);
    printf("코드는 %s이고 %s으로 %d 만원, 옵션은 %s입니다.\n", multi[1].number, multi[1].name, multi[1].price / 10000, multi[1].option);
    printf("코드는 %s이고 %s으로 %d 만원, 옵션은 %s입니다.\n", multi[2].number, multi[2].name, multi[2].price / 10000, multi[2].option);

    return 0;
}