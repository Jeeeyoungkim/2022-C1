#include <stdio.h>
int main(void){
    double answer, tax;
    int field, tip;

    printf("=== 미국 최종 지불 가격 계산 프로그램 ===\n");
    while (1){
        printf("음식 가격을 달러로 입력하세요. 소수점 둘째자리까지 가능합니다. : ");
        scanf(" %lf", &answer);

        printf("현재 주를 입력하세요. (1-오리곤, 2-뉴욕, 3-캘리포니아, 4-텍사스, 5-알래스카): ");
        scanf(" %d", &field);

        if (field == 1) {
            tax = 0;
        } else if (field ==2){
            tax = 8.52;
        }else if (field ==3) {
            tax = 8.82;
        }else if (field ==4) {
            tax = 8.20;
        }else if (field ==5) {
            tax = 1.76;
        }else  {
            continue;
        }

        printf("팁을 몇 퍼센트 줄 것인지 숫자로 입력하세요 (0-100 사이): ");
        scanf(" %d", &tip);

        if (tip > 0 ) {
            printf("트리의 높이가 너무 낮습니다.\n");
            continue;
        } else if (tip > 15) {
            printf("트리의 높이가 너무 높습니다\n");
            continue;
        } 



    }




    return 0;
}