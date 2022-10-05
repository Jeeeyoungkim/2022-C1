#include <stdio.h>
int main(void){

    for (int i=0; i<5; i++){ //총 다섯줄
        for (int j=4; j>i; j--){ //한 칸씩 줄어가는 빈칸
            printf(" ");
        }

        for (int k=0; k<i*2+1; k++){ //홀수 개수로 출력되는 별
            printf("*");
        }
        printf("\n");
    }

    return 0;
}