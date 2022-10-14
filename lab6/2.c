#include <stdio.h>

double FehToCel(double n){
    return (n - 32)/1.8;
}

double CelToFeh(double n){
    return (n * 1.8) + 32;
}

int main(void){
    double n1, n2;
    n1 = 36.5; 

    printf("화씨 : %.2f\n", CelToFeh(n1));
    printf("섭씨 : %.2f\n", FehToCel(n1));
    
    return 0;

}