#include <stdio.h>
#include "func.h"

int main(void){
    int x,y;

    printf("정수값 x를 입력하세요 : ");
    scanf("%d",&x);
    printf("정수값 y를 입력하세요 : ");
    scanf("%d", &y);

    printf("f(%d, %d) = %d입니다\n", x, y, func(x,y));

    return 0;
}