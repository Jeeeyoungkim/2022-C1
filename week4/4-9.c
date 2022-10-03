#include <stdio.h>
int main(void){
    int num=0, sum=0;
    do {
        if (num%2 == 0){
            sum += num;
        }
        num++;
    } while(num<=100);

    printf("%d\n", sum);
}