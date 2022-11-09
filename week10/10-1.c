#include <stdio.h>

int main(void){
    int num = 10;
    int * p = &num;

    *p = 20;

    printf("%d", *p);

    return 0;
}