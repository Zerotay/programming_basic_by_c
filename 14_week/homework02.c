// 철학과 2016640001 김동건
#include <stdio.h>
int main()
{
    FILE* fp = fopen("Addr.txt", "w");
    if (!fp) return 1;

    char check = 'Y';
    char name[21], email[51];
    unsigned int number;
    double grade;

    while (check !='N' && check != 'n')
    {
        printf("이름: ");
        gets(name);
        printf("학번: ");
        scanf("%u", &number);
        printf("학점: ");
        scanf("%lf", &grade);
        getchar();
        printf("이메일: ");
        gets(email);

        fprintf(fp, "%s\n%u\n%.1lf\n%s\n", name, number,grade,email);

        printf("계속 입력(Y/N)");
        scanf("%c", &check);
        getchar();
        printf("\n");
    }

    printf("Addtr.txt 파일쓰기가 완료되었습니다.\n");
    fclose(fp);
    return 0;
}