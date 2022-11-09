#include <stdio.h>

int main(void){
    int a1, a2;

    printf("=== 트리 그리기 프로그램 ===\n");
    while (1){
        printf("트리의 높이를 입력하세요 (범위 5~15) : ");
        scanf(" %d", &a1);
        printf("%d", a1);
        if (a1 < 5) {
            printf("트리의 높이가 너무 낮습니다.\n");
            continue;
        } else if (a1 > 15) {
            printf("트리의 높이가 너무 높습니다\n");
            continue;
        } else {
            printf("\n");
            for (int i=0; i < a1; i++){
                for (int j=a1; j>i; j++){ //한 칸씩 줄어가는 빈칸
                    printf(" ");
                }
                printf("*");
                for(int k=2*(a1-i)-1; k >i; k--){
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }

            for(int q=0; q<= 2*(a1-2)-1; q++){
                printf("*");
            }
            printf("\n");
            for(int q=0; q<= (a1-2)-1; q++){
                printf(" ");
            }
            printf("|\n");
            for(int q=0; q<= (a1-2)-1; q++){
                printf(" ");
            }
            printf("|\n");
            break;
        }
    }

    return 0;
}