#include <stdio.h>

int main(void){
    int num;
    int count = 0;

    printf("Please enter a number : ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++){
        if (num % i == 0){
            count++;
        } 
    }
    
    if (count == 1) {
        printf("It is a prime number\n");
    } else {
        printf("It is not a prime number\n");
    }
    return 0;
}