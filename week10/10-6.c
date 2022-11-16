#include <stdio.h>

int main(void){
    int arr[6] = {1,2,3,4,5,6};
    int * front = &arr[0];
    int * back = &arr[5];

    for(int i=0; i<6; i++){
        * (front+i) = * (back-i);
    }

    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
}