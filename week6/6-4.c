#include <stdio.h>

int fac(int n){
    if (n==1)
        return 1;
    else
        return (fac(n-1) * n);
}

int main(void){
    int n;

    printf("input one integer:\n");
    scanf("%d", &n);
    printf("%d", fac(n));

    return 0;

}