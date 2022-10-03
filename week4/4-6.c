#include <stdio.h>

int main(void){
    int num_num = 5, num =2, index=0;
    float sum=0;

    while (index < num_num) {

        while (num<=1){
            printf("1이상의 정수를 입력해 주세요");
            scanf("%d", &num);
        }        
 
        sum += num;
        index++;
    }
    printf("평균은 %.2f입니다.\n", sum/num_num);

    return 0;
}
