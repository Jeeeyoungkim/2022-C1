#include <stdio.h>

int main(void){
    int star = 0, zero=0;

    while (star < 5) {

        while (zero <= star){
            printf("0");
            zero++;
        }
        zero=0;
        printf("*\n");
        star ++;
    }

    return 0;
}