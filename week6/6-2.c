#include <stdio.h>

int Cmp(int, int);

int main(void){

    printf("3과 4에서 큰 수는 %d이다.\n", Cmp(3,4));

    return 0;
}

int Cmp(int n1, int n2){
    if (n1 >= n2)
        return n1;
    else
        return n2;
}