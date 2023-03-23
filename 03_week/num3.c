#include <stdio.h>

int main() {
    // 문자열은 데이터타입이 없다.
    // 1. 문자 + 배열
    // 2. 문자 + 포인터
    char school[20 + 1];
    char department[20 + 1];
    int hakbeon;
    char name[20 + 1];
    char gender;
    double grade;
    char hobby[20];


    //키보드 입력
    printf("학교: ");
    scanf("%s", school);
    //문자열은 데이터타입이 없어서 주소 연산자 &를 쓰지 않는다.
    printf("학과: ");
    scanf("%s", department);
    printf("학번: ");
    scanf("%d", &hakbeon);
    printf("이름: ");
    scanf("%s", name);
    printf("성별: ");
    scanf(" %c", &gender);
    // %c 앞에 한 칸을 띄운다. 공백 문자를 처리하기 위함이다.
    printf("학점: ");
    scanf("%lf", &grade);
    printf("취미: ");
    scanf("%s", hobby);

    // 출력하기
    printf("************************************\n");
    printf("%s  %s  %i\n", school, department, hakbeon);
    if (gender == 'M' || gender == 'm')
        printf("남성");
    else
        printf("여성");
    printf("이고 학점은 %.2lf이고 취미는 %s이다\n", grade, hobby);
    printf("저는 %s 입니다 ^^ \n", name);
    printf("************************************\n");

    return 0;
}
