#include <stdio.h>

int main(void){
    int result;
    int num1, num2;

    printf("num1 :");
    scanf("%d", &num1);
    printf("num2 :");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, num1+num2);

    return 0;
}