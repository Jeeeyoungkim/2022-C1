#include <stdio.h>

int main(void){
    int i = 1, num =0, index=0;
    float sum=0;
    printf("몇개의 정수를 입력하시겠습니까? : ");
    scanf("%d", &i);
    
    while (index < i) {
        scanf("%d", &num);
        sum += num;
        index++;
    }
    printf("평균은 %.2f입니다.\n", sum/i);

    return 0;
}
