#include <stdio.h>
int main(void){
    int num, hap;
    hap = 0;

    while (num != 0){
        printf("숫자를 하나 입력하세요 : ");
        scanf("%d", &num);
        hap += num;

    }

    printf("입력된 정수의 합 : %d\n", hap);

    return 0;
}