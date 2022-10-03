#include <stdio.h>

int main(void){
    int dan = 1, num =1;
    printf("단을 입력하세요.\n");

    while (dan < 10) {
        num = 1;
        while (num < 10) {
            printf("%2d x %2d = %2d\n", dan, num, dan*num);
            num++;
        }
        dan ++;
        printf("\n");
    }
    return 0;
}
