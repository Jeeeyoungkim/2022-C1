#include <stdio.h>
int main(void){
    int total = 0, num =0;
    do {
        printf("input integer(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    } while(num!=0);

    printf("%d\n", total);
}