#include <stdio.h>

int main()
{
    int *ip;
    double *dp;
    char *cp;
    void *vp;
    FILE *fp;
    void (*sump)(int a, int b);
    struct Student *ssp;

    printf("ip %lu\n", sizeof(ip));
    printf("cp %lu\n", sizeof(cp));
    printf("dp %lu\n", sizeof(dp));

    int i = 10;
    char c = 69;
    float f = 12.4;

    printf("i %p, %u, %x\n", &i, &i, &i);
    printf("i %p, %u\n", &c, &c);
    printf("i %p, %u\n", &f, &f);

    // int *tmp;
    // *tmp = 190;
    // printf("%d\n", *tmp);

    char *pc;
    int *pi;
    double *pd;

    pc = 10000;
    pi = (int *)10000; // 굳이 꼭 형변환을 명시해줄 필요는 없다
    pd = (double *) 10000;
    printf("%u, %u, %u\n", pc, pc+1, pc+2);
    printf("%u, %u, %u\n", pi, pi+1, pi+2);
    printf("%u, %u, %u\n", pd, pd+1, pd+2);

    int a[] = {1,2,3,4,5};
    printf("a %u\n", a);
    printf("a %u\n", &a);
    printf("a %u\n", &a[0]); //여기가지는 결과가 전부 같다.
    printf("a %u\n", *a);


    return 0;
}