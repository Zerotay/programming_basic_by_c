// #include <stdio.h>

// int main()
// {
//     char cNum, dNum;
//     printf("char size = %d\n", sizeof(char));

//     cNum = 'A';
//     dNum = 78;
//     printf("cNum(%%c) = %c cNum(%%d) %d \n", cNum, cNum);
//     printf("dNum(%%c) = %c dNum(%%d) %d \n", dNum, dNum);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     char aNum, bNum;
//     printf("문자(char) 오버플로우일때출력\n");
//     printf("문자 char 범위는 -128~127 입니다 (아스키코드 0 ~127)\n");

//     printf("문자 aNum (%%c) 입력 :");
//     scanf("%c", &aNum);
//     printf("문자 aNum(%%c)은 '%c' 이고, 코드 값은 %d입니다. \n", aNum, aNum);


//     printf("문자 bNum (%%d) 입력 :");
//     scanf("%d", &bNum);
//     printf("문자 bNum(%%c)은 '%c' 이고, 코드 값은 %d입니다. \n", bNum, bNum);
//     return 0;
// }
#include <stdio.h>

int main()
{
    char aNum, bNum;
    printf("문자(unsigned char) 오버플로우일때출력\n");
    printf("문자 unsigned char 범위는 0~255 입니다 (아스키코드)\n");

    printf("문자 aNum (%%c) 입력 :");
    scanf("%c", &aNum);
    printf("문자 aNum(%%c)은 '%c' 이고, 코드 값은 %d입니다. \n", aNum, aNum);


    printf("문자 bNum (%%d) 입력 :");
    scanf("%d", &bNum);
    printf("문자 bNum(%%c)은 '%c' 이고, 코드 값은 %d입니다. \n", bNum, bNum);
    return 0;
}
