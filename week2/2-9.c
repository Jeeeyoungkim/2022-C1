#include <stdio.h>

int main(void){
    int num = 15;

    int result = num << 1;
    int result2 = num << 2;
    int result3 = num << 3;

    printf("1칸 : %d\n", result);
    printf("2칸 : %d\n", result2);
    printf("3칸 : %d\n", result3);

    return 0;
}