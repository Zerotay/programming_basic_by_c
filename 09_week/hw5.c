// #include <stdio.h>

// int main()
// {
//     int id, pass;

//     printf("아이디와 패스워드를 4개의 숫자로 입력하세요.\n");

//     printf("id: ____\b\b\b\b");
//     scanf("%d", &id);
//     printf("pass: ____\b\b\b\b");
//     scanf("%d", &pass);

//     printf("\a 입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.", id, pass);

//     return 0;

// }
#include <stdio.h>

int main()
{
    char id[9];
    char pass[9];

    printf("아이디와 패스워드를 8자리 입력하세요.\n");

    printf("id: ________\b\b\b\b\b\b\b\b");
    scanf("%s", id);
    printf("pass: ________\b\b\b\b\b\b\b\b");
    scanf("%s", pass);

    printf("\a 입력된 아이디는 \"%s\"이고 패스워드는 \"%s\"입니다.", id, pass);

    return 0;

}