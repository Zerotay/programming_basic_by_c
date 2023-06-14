// 철학과 2016640001 김동건
#include <stdio.h>
int main()
{
    FILE* fp = fopen("Addr.txt", "r");
    if (!fp)return 1;

    char name[21];
    unsigned int number;
    double grade;
    char email[51];

    int i = 1;
    while (1)
    {
        fscanf(fp, "%s %u %lf %s", name, &number, &grade, email);
        if (feof(fp)) break;

        printf("%i)이름: %s\n", i, name);
        printf("%i)학번: %u\n", i, number);
        printf("%i)성적: %.1lf\n", i, grade);
        if (grade > 90) printf("%i)학점: A\n", i);
        else if (grade > 80) printf("%i)학점: B\n", i);
        else if (grade > 70) printf("%i)학점: C\n", i);
        else if (grade > 60) printf("%i)학점: D\n", i);
        else printf("%i)학점: F\n", i);
        printf("%i)이메일: %s\n\n", i++, email);
    }
    printf("Addtr.txt 파일읽기가 완료되었습니다.\n");
    fclose(fp);
    return 0;
}