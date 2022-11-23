#include <stdio.h>

int SquareByValue(int num){
    return num * num;
}

void SquareByPointer(int *ptr){
    int num = * ptr;
    * ptr = num * num;
}

int main(void) {
    int num = 3;

    printf("%d", SquareByValue(num));
    SquareByPointer(&num);
    printf("%d \n", num);
    
    return 0;
}