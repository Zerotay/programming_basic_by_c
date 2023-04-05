#include <stdio.h>

int main()
{
    int input;

    scanf("%d", &input);
    switch (input)
    {
        case 0:
        case 1:
        case 2:
            printf("고양이");
            break;
        case 3:
        case 4:
        case 5:
            printf("강아지");
            break;
        case 6:
        case 7:
        case 8:
            printf("다람쥐");
            break;
        default:
            printf("잘못된 이미지");
            break;
    }
    return 0;
}
