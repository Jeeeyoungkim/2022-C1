#include <stdio.h>

int main(void){
    int index=1, num;
    printf("숫자를 하나 입력하세요");
    scanf("%d", &num);

    while (index < num){
        printf("%d : Hello world\n", index);
        index++;
    }

    return 0;
}