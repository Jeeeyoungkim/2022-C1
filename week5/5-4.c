#include <stdio.h>

int main(void){
    int num, dan;

    for(dan=1 ; dan<10; dan++){
        if( dan%2==1 )
            continue;
        for(num=1; num<=dan; num++){
                printf("%d x %d = %d\n", dan, num, dan*num);
            }
        printf("\n");
    }
    
    return 0;
}