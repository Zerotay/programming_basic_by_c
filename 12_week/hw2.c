#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lineup(int* pa, int* pb, int* pc, int* pd);
void swap(int* a, int *b);

int main(void)
{
    int aNum = 0, bNum = 0, cNum = 0, dNum=0;
    printf("aNum숫자 입력 : ");
    scanf("%d", &aNum);
    printf("bNum 숫자 입력 : ");
    scanf("%d", &bNum);
    printf("cNum 숫자 입력 : ");
    scanf("%d", &cNum);
    printf("dNum 숫자 입력 : ");
    scanf("%d", &dNum);
    lineup(&aNum, &bNum, &cNum, &dNum);
    printf("순서대로 출력 : %d, %d, %d, %d 입니다 \n", aNum, bNum, cNum, dNum);
    return 0;
}

void swap(int* a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void lineup(int* pa, int* pb, int* pc, int* pd)
{
    int temp = 0;
    if (*pa > *pb)
        swap(pa,pb);
    if (*pa > *pc)
        swap(pa,pc);
    if (*pa > *pd)
        swap(pa,pd);
    if (*pb > *pc)
        swap(pb,pc);
    if (*pb > *pd)
        swap(pb,pd);
    if (*pc > *pd)
        swap(pc,pd);
}