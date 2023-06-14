#include <stdio.h>
#define ROWS 8
#define COLS 16
extern int image[ROWS][COLS];
extern void display(int image[ROWS][COLS]);
extern void inverse(int img[ROWS][COLS]);
int main(void)
{
    printf("변환전 이미지\n");
    display(image);
    inverse(image);
    printf("\n\n변환후 이미지\n");
    display(image);
    return 0;
}