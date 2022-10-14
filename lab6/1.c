#include <stdio.h>

int getlarge(int n1, int n2, int n3){
    if (n1 >= n2){
        return (n1 >= n3 ? n1 : n3);
    } else  {
        return (n2 >= n3 ? n2 : n3);
}

int getsmall(int n1, int n2, int n3){
    if (n1 < n2){
        if (n1 > n3)
            return n3;
        else
            return n1;
    } else if (n1 >= n2) {
        if (n2 >= n3)
            return n3;
        else
            return n2;
    } else {
        return n3;
    }
}

int main(void){
    int n1, n2, n3;
    printf("intput 3 integers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("result1 : %d\n", getlarge(n1, n2, n3));
    printf("result2 : %d\n", getsmall(n1, n2, n3));

    return 0;

};