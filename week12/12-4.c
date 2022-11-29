#include <stdio.h>

int main(void){
    char name1[20] = "0", name2[20] = "0";
    int age1, age2;

    printf("사람 정보 입력");
    scanf("%s", name1, sizeof(name1));
    scnaf("%d", &age1);

    printf("사람 정보 입력");
    scanf("%s", name1, sizeof(name1));
    scnaf("%d", &age1);

    return 0;
}