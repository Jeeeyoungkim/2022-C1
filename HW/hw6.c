#include <stdio.h>

int main(void){
    int num[5];
    int OddNum[5], EvenNum[5];
    int i = 0;


    printf("Please input five integers: ");
    while(i<5) {
        scanf("%d", &num[i]);
        i++;
    }

    for (int j=0; j<sizeof(num)/sizeof(int); j++){
        printf("%d ", num[j]);
        if(num[j]%2 == 0) {
            
          }

    printf("\n");

    return 0;
}