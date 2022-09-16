#include <stdio.h>

int main(void){
    int num1, num2, num3;
    int result;

    printf("세 개의 정수를 입력하세요");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1-num2) * (num2+num3) * (num3%num1);
    printf("결과 : %d\n", result);

    return 0;
}