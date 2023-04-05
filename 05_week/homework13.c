#include <stdio.h>

int main()
{
    int smoke, age, bmi;

    scanf("%d %d %d", &smoke, &age, &bmi);

    if (smoke)
        if (age > 30)
            printf("1");
        else
            printf("2");
    else if (bmi > 30)
        printf("3");
    else
        printf("4");


    return 0;
}