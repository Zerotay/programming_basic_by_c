// 철학과 2016640001 김동건
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[] = "익살이라는 점에서 개그와 유사점이 있지만, 약간 구분하여 사용하는 편이다. 흔히들 개그맨이 벌이는/ 웃기는 행동을 개그라고 하고, 농담이나 다른 방법으로-재미를 유발하는_ 것을 유머라 부른다.";

    char seps[] = " ,.-_/";
    int ans = 0;
    char *ansarr[3] ;
    int j = 0;
    char *loc;
    char *start = text;

    for(int k = 0; k < 10; k++)
    {
        if (loc = strstr(start, "개그"))
        {
            ans++;
            ansarr[j++] = loc - text;
            start = loc+1;
        }
    }

    int i = 0;
    char *p = strtok(text, seps);
    while (p != NULL)
    {
        printf("토큰 %i : %s\n", ++i, p);
        p = strtok(NULL, seps);
    }

    printf("\"개그\" 단어는 %i번 (%u번째, %u번째, %u번째)", ans, ansarr[0],ansarr[1],ansarr[2]);




    return 0;
}