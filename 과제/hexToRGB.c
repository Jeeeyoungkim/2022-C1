#include <stdio.h>
int main(void){
    int colorCode;

    printf("16진수 컬러 코드 값을 입력하세요 : ");
    scanf("%x", &colorCode);

    printf("입력된 컬러의 R,G,B값은 %d 입니다.\n", colorCode);

    return 0;
}