#include <stdio.h>

int main(){
    char school[30], department[20];
    int student_id;
    char name[20], gender;
    double degree;
    char hobby[100];

    printf("�б� : "); scanf("%s", school);
    printf("�а� : "); scanf("%s", department);
    printf("�й� : "); scanf("%d", &student_id);
    printf("�̸� : "); scanf("%s", name);
    printf("���� : "); scanf(" %c", &gender);
    printf("���� : "); scanf("%lf", &degree);
    printf("��� : "); scanf("%s", hobby);

    printf("************************************\n");
    printf("%s  %s  %d\n", school, department, student_id);
    if (gender == 'M') printf("�����̰� ");
    else printf("�����̰� ");

    printf("������ %.2lf�̰� ��̴� %s�̴�\n���� %s �Դϴ� ^^\n", degree, hobby, name);
    printf("************************************\n");

    return 0;
}