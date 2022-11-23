#include <stdio.h>

void Swap3(int * p1, int * p2, int * p3){
    int temp = * p3;

    * p3 = * p2;
    * p2 = * p1;
    * p1 = temp;

}

int main(void) {
    int num1=10, num2=20, num3=30;

    Swap3(&num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}