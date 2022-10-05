#include <stdio.h>

int main(void){
    int Korean, Math, English;
    int avg;
    
    printf("점수 입력 : ");
    scanf("%d %d %d",&Korean, &Math, &English);

    avg = ( Korean + Math + English ) / 3;
    printf("평균 : %d\n", avg);

    if (avg>=90) {
        printf("A\n");
    } else if (avg>=80) {
        printf("B\n");
    } else if (avg>=70) {
        printf("C\n");
    } else if (avg>=50) {
        printf("D\n");
    } else {
        printf("F\n");
    } 
    
    return 0;
}