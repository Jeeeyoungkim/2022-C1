#include <stdio.h>

int Abscmp(int, int);
int Getabs(int);

int main(void){
    int num1, num2;

    printf("두개 정수 입력 :");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d중 절댓값이 큰 경우 : %d\n", num1, num2, Abscmp(num1, num2));

    return 0;
}

int Abscmp(int n1, int n2){

    if (Getabs(n1) > Getabs(n2))
        return n1;
    else
        return n2;
}

int Getabs(int n1){
    if (n1 < 0)
        return n1 * (-1);
    else
        return n1;
}