#include <stdio.h>

int  main()
{
    int hour, minute;

    do{
        scanf("%d %d", &hour, &minute);
    }
    while(hour > 23 || hour < 0 || minute > 59 ||  minute < 0);
    if (minute >= 45)
        printf("%d %d", hour, minute -45);
    else
        if (hour)
            printf("%d %d", hour -1, minute +15);
        else
            printf("%d %d", 23, minute +15);
    return 0;
}