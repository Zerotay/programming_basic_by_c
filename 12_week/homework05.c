// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 10
// 0 배열 1 문자열 2 문자 3 함수 4 포인터 5 구조체 6 동적메모리
int main()
{
    int order;
    int tmp = 0;
    int flag = 0;
    char namequery[20];
    char emailquery[20];
    char phonequery[14];
    char text[100];

    char name[MAX][20];
    unsigned int id[MAX];
    char email[MAX][20];
    char phone[MAX][14];
    unsigned char grade[MAX];


    while (1)
    {
        printf("학우 연락처\n");
        printf("1. 학우 입력\n");
        printf("2. 학우 검색\n");
        printf("3. 이메일\n");
        printf("4. 문자 메시지\n");
        printf("5. 종료\n");
        printf("선택 : ");
        scanf("%d", &order);
        getchar();
        if (order == 1)
        {
            printf("이름 : ");
            gets(name[tmp]);
            printf("학번 : ");
            scanf("%i", &id[tmp]);
            getchar();
            printf("이메일 : ");
            gets(email[tmp]);
            printf("전화번호 : ");
            gets(phone[tmp]);
            printf("학년 : ");
            scanf("%i", &grade[tmp]);
            getchar();
            tmp++;
        }
        else if (order ==2)
        {
            printf("이름 입력 : ");
            gets(namequery);
            for (int i = 0; i < MAX; i++)
            {
                if (!strcmp(namequery, name[i]))
                {
                    printf("%s %d\n %s\n %s %d학년\n", name[i], id[i], email[i], phone[i], grade[i]);
                    flag++;
                }
            }
            if (!flag)
                printf("연락처에는 없습니다.\n");
            flag = 0;
        }
        else if (order ==3)
        {
            printf("이메일 입력 : ");
            gets(emailquery);
            for (int i = 0; i < MAX; i++)
                if (!strcmp(emailquery, email[i]))
                    flag++;
            if (!flag)
                printf("이메일 주소 없습니다.\n");
            else
            {
                printf("내용 입력 : ");
                gets(text);
                printf("메일을 보냈습니다.\n");

            }
            flag = 0;

        }
        else if (order ==4)
        {
            printf("전화번호 입력 : ");
            gets(phonequery);
            for (int i = 0; i < MAX; i++)
                if (!strcmp(phonequery, phone[i]))
                    flag++;
            if (!flag)
                printf("전화번호가 없습니다.\n");
            else
            {
                printf("메시지 입력 : ");
                gets(text);
                printf("메시지를 전송했습니다.\n");

            }
            flag = 0;

        }
        else if (order ==5)
            break;
        else
            continue;
    }



    return 0;
}