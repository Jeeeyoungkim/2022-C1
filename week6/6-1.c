#include <stdio.h>

int Add(int n1, int n2){
    return n1+n2;
}

void ShowAdd(int n){
    printf("덧셈결과 출력 : %d\n",n);
}

int ReadNum(void){
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUse(void){
    printf("두개의 정수를 입력하시오. \n");
}

int main(void){
    int result, n1, n2;
    HowToUse();
    n1 = ReadNum();
    n2 = ReadNum();
    result = Add(n1, n2);
    ShowAdd(result);

    return 0;
}