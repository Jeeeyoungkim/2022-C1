#include <stdio.h>
int main(void){
    int x1, x2, y1, y2;
    int width, height, box;

    printf("좌 상단의 x, y좌표 : ");
    scanf("%d %d", &x1, &y1);


    printf("우 하단의 x, y좌표 : ");
    scanf("%d %d", &x2, &y2);

    width = x2 - x1;
    height = y2 - y1;
    box = width * height;

    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", box);

    return 0;
}