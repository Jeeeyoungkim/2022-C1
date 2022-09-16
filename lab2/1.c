#include <stdio.h>

int main(void){
    int num1, result;

    printf("한 개의 정수를 입력하세요 : ");
    scanf("%d", &num1);

    result = ~num1; //num1 보수로 변환
    result ++; // +1 해주기

    printf("반대 부호는 %d입니다.\n",result);

    return 0;
}