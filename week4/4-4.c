#include <stdio.h>

int main(void){
    int dan = 1, num;
    printf("단을 입력하세요.\n");
    scanf("%d", &dan);
    num = dan;

    while (num >= 1) {
        printf("%2d x %2d = %2d\n", dan, num, dan*num);
        num--;
    }

    return 0;
}
