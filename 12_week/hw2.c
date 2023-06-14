#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lineup(int* pa, int* pb, int* pc, int* pd);
void swap(int* a, int *b);

int main(void)
{
    int aNum = 0, bNum = 0, cNum = 0, dNum=0;
    printf("aNum���� �Է� : ");
    scanf("%d", &aNum);
    printf("bNum ���� �Է� : ");
    scanf("%d", &bNum);
    printf("cNum ���� �Է� : ");
    scanf("%d", &cNum);
    printf("dNum ���� �Է� : ");
    scanf("%d", &dNum);
    lineup(&aNum, &bNum, &cNum, &dNum);
    printf("������� ��� : %d, %d, %d, %d �Դϴ� \n", aNum, bNum, cNum, dNum);
    return 0;
}

void swap(int* a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
