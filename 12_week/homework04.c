// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CNT 7
// 0 배열 1 문자열 2 문자 3 함수 4 포인터 5 구조체 6 동적메모리
int main()
{
    char koreaWord[CNT][3][99+1];
    char text[30];
    int key;
    int mul=1;

    strcpy(koreaWord[0][0], "배열은 같은 타입의 변수들로 이루어진 유한 집합");
    strcpy(koreaWord[0][1], "배열 예제는 int num[5];");
    strcpy(koreaWord[0][2], "배열");

    strcpy(koreaWord[1][0], "문자열은 NULL로 끝나는 문자");
    strcpy(koreaWord[1][1], "문자열 예제로는 char name[19+1];");
    strcpy(koreaWord[1][2], "문자열");

    strcpy(koreaWord[2][0], "문자는 char에 저장되는 변수, ascii로 표현됨");
    strcpy(koreaWord[2][1], "문자 예제로는 char name;");
    strcpy(koreaWord[2][2], "문자");

    strcpy(koreaWord[3][0], "함수는 입력을 받아서 특정한 작업을 수행하여서 결과를 반환하는 상자");
    strcpy(koreaWord[3][1], "함수 예제로는 char name(char val);");
    strcpy(koreaWord[3][2], "함수");

    strcpy(koreaWord[4][0], "포인터는 주소를 가지고 있는 변수");
    strcpy(koreaWord[4][1], "포인터 예제로는 char *name;");
    strcpy(koreaWord[4][2], "포인터");

    strcpy(koreaWord[5][0], "구조체는 서로 다른 데이터들을 하나로 묶는 도구");
    strcpy(koreaWord[5][1], "구조체 예제로는 struct name{};");
    strcpy(koreaWord[5][2], "구조체");

    strcpy(koreaWord[6][0], "듕적 메모리는 실행 중에 할당되는 메모리");
    strcpy(koreaWord[6][1], "동적 메모리 예제로는 malloc(sizeof(int) * 9);");
    strcpy(koreaWord[6][2], "동적 메모리");

    printf("단어 입력 : ");
    gets(text);
    if (!strcmp(text, "배열"))
        key = 0;
    else if (!strcmp(text, "문자열"))
        key = 1;
    else if (!strcmp(text, "문자"))
        key = 2;
    else if (!strcmp(text, "함수"))
        key = 3;
    else if (!strcmp(text, "포인터"))
        key = 4;
    else if (!strcmp(text, "구조체"))
        key = 5;
    else
        key = 6;

    printf("%s\n", koreaWord[key][0]);
    printf("%s\n", koreaWord[key][1]);

    return 0;
}