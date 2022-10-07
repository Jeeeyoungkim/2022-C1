#include <stdio.h>

int main(void){
    int num;
    printf("정수 입력 :");
    scanf("%d", &num);

    switch(num/10){
        case 1:
            printf("10의자리\n");
            break;
        case 2:
            printf("20의자리\n");
            break;
        case 3:
            printf("30의자리\n");
            break;
        case 4:
            printf("40의자리\n");
            break;
        case 5:
            printf("50의자리\n");
            break;
        default:
            printf("야호\n");
    }

    return 0;
}