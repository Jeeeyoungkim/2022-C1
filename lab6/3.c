#include <stdio.h>

int fibo(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibo(n-2) + fibo(n-1));
}

int main(void){
    int num;
    printf("숫자 입력 : ");
    scanf("%d", &num);

    if (num < 0){
        printf("양수입력\n");
        return 1;
    }

    for (int i = 0; i <= num; i++){
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}