#include <stdio.h>
#include <stdlib.h>
void hw_init()
{
    static int inited = 0;
    if( inited == 0 ){
        printf("hw_init(): 네트워크 장치를 초기화합니다. \n");
        inited = 1;
    }
    else {
        printf("hw_init(): 이 미 초 기 화 되 었 으 므 로 초기화하지않습니다. \n");
    }
}