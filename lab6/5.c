#include <stdio.h>
#include "sovle.h"


int main(void){
    int n;
    
    printf("input one integer:");
    scanf("%d", &n);
    printf("%d\n", mypow(n));
 
    return 0;
}