#include <stdio.h>
int main(void){
    int colorCode, hexCode;
    int r, g, b;
    char channel, answer;
    int cal;

    printf("16진수 컬러 코드 값을 입력하세요 : ");
    scanf("%x", &colorCode);

    //rgb값 분리하기, shift와 &이용
    r = colorCode & 0xFF0000;
    r = r >> 16;
    g = colorCode & 0x00FF00;
    g = g >> 8;
    b = colorCode & 0x0000FF;

    printf("입력된 컬러의 R, G, B값은 (%d, %d, %d)입니다.\n", r, g, b);

    while(1){
        printf("RGB중 변경할 컬러 채널을 입력하세요 : ");
        scanf(" %c", &channel);

            if (channel == 82 || channel == 114){ //R, r일 때
                printf("R채널의 증감 정도를 입력하세요. : ");
                scanf("%d", &cal);
                r = r + cal;
                if (r < 0) {
                    r = 0;
                } else if (r > 255) {
                    r = 255;
                }


            } else if (channel == 71 || channel == 103){ //G, g일때
                printf("G채널의 증감 정도를 입력하세요. : ");
                scanf("%d", &cal);
                g = g + cal;
                if (g < 0) {
                    g = 0;
                } else if (g > 255) {
                    g = 255;
                }

            } else if (channel == 66 || channel == 98){ //B, b일때 
                printf("B채널의 증감 정도를 입력하세요. : ");
                scanf("%d", &cal);
                b = b + cal;
                if (b < 0) {
                    b = 0;
                } else if (b > 255) {
                    b = 255;
                }

            } else {
                printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
                continue;
            }

        hexCode = (r << 16) | (g << 8) | b; //조정한 rgb 합치기

        printf("조정된 컬러의 R, G, B 값은 (%d, %d, %d)이고, ", r, g, b);
        printf("이는 0x%06X로 저장됩니다.\n", hexCode);
        printf("계속 컬러를 조정하시겠습니까? (y/n) ");
        scanf(" %c", &answer);
        if (answer == 110){
            break;
        } else if (answer == 121) {}

    }

    return 0;
}