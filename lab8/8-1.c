#include <stdio.h>

int main(void){
    int arr[5];


    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);
    scanf("%d", &arr[2]);
    scanf("%d", &arr[3]);
    scanf("%d", &arr[4]);

    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    //최댓값
    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    for (int i=0; i<5; i++){
        if(max<arr[i]){
            max = arr[i];
        }

        if(min>arr[i]){
            min = arr[i];
        }

        sum = sum + arr[i];
    }
    printf("\n");
    printf("최댓값 %d\n", max);
    printf("최솟값 %d\n", min);
    printf("총합 %d\n", sum);

    return 0;
}