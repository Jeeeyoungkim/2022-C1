#include <stdio.h>

int main(void){
    int num1, num2;
    int result1, result2;

    printf("두개의 정수를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);

    result1 = num1 / num2; //몫
    result2 = num1 % num2; //나머지

    printf("%d %d\n", result1, result2);

    return 0;
}