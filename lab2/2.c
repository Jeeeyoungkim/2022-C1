#include <stdio.h>

int main(void){
    int num1 = 3;
    int num2, num3;

    num2 = num1 << 3; //3 * 8, <<은 2의 거듭제곱 곱하기와 같음
    num3 = num2 >> 2; //24/4 >>은 2의 거듭제곱 나누기와 같음
    
    printf("%d\n", num3);
}