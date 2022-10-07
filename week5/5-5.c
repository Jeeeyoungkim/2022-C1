#include <stdio.h>
int main(void){

    for (int A =1; A<10; A++){
        for(int Z=1; Z<10; Z++){
            int sik1 = A*10 + Z;
            int sik2 = Z*10 + A;
            if (sik1 + sik2 == 99){
                printf("%d %d\n", A, Z);
            }
        }
    }
    return 0;
}