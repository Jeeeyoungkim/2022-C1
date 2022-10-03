#include <stdio.h>
int main(void){
    int num, num2;
    int fac=1;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    for (int i=1; i <= num; i++){
        fac = fac * i;
    }
    
    printf("%d\n", fac);

    return 0;
}