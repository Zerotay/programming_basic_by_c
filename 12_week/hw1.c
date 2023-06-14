#include <stdio.h>
#define COL 8
#define ROW 16
void print_image(int data[COL][ROW])
{
    int r,c;
    for(r=0;r<COL;r++){
        for(c=0;c<ROW;c++){
            printf("%3d", data[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void inverse(int data[][ROW], int size)
{
    int r,c;
    int *p;
    p = &data[0][0];
    for(r=0;r<COL;r++){
        for(c=0;c<ROW;c++){
            *p = *p == 0 ? 1 : 0;
            p++;
        }
    }
}

void display(int data[][ROW], int size)
{
    int r,c;
    int *p;
    p = &data[0][0];
    for(r=0;r<COL;r++){
        for(c=0;c<ROW;c++){
            printf("%c", *p==0? '-':'*');
            p++;
        }
        printf("\n");
    }
}

void brighten_image(int data[COL][ROW])
{
    int r,c;
    int *p;
    p = &data[0][0];
    for(r=0;r<COL;r++){
        for(c=0;c<ROW;c++){
            *p += 10;
            p++;
        }
    }
}

int main()
{
    int data[COL][ROW] = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1},
        {1,1,1,0,0,0,0,1,1,0,0,1,1,1,1,1},
        {1,1,0,0,0,0,0,1,0,0,0,0,1,1,1,1},
        {1,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };

    printf("original image\n");
    print_image(data);
    printf("inverse image\n");
    inverse(data, 0);
    print_image(data);
    printf("display image\n");
    display(data, 0);
    printf("brighten image\n");
    brighten_image(data);
    print_image(data);

    return 0;
}
