#include <stdio.h>

int main(){
    char school[30], department[20];
    int student_id;
    char name[20], gender;
    double degree;
    char hobby[100];

    printf("학교 : "); scanf("%s", school);
    printf("학과 : "); scanf("%s", department);
    printf("학번 : "); scanf("%d", &student_id);
    printf("이름 : "); scanf("%s", name);
    printf("성별 : "); scanf(" %c", &gender);
    printf("학점 : "); scanf("%lf", &degree);
    printf("취미 : "); scanf("%s", hobby);

    printf("************************************\n");
    printf("%s  %s  %d\n", school, department, student_id);
    if (gender == 'M') printf("남성이고 ");
    else printf("여성이고 ");

    printf("학점은 %.2lf이고 취미는 %s이다\n저는 %s 입니다 ^^\n", degree, hobby, name);
    printf("************************************\n");

    return 0;
}