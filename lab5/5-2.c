#include <stdio.h>
int main(void){
    int num1, num2;
    int result;

    printf("두 수를 입력 : ");
    scanf("%d %d", &num1, &num2);

    result = num1 - num2;
    result = result > 0 ? result : result*(-1);

    printf("%d\n", result);

    return 0;
}