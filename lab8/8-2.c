#include <stdio.h>
int main(void) {
    int len = 0, i;
    char voca[100], temp; printf("영단어 입력: "); scanf("%s", voca);

    while (voca[len] != '\0')
        len++;
    for (i = 0; i < len / 2; i++) {
        temp = voca[i];
        voca[i] = voca[len-1-i];
        voca[len-1-i] = temp;
        }
        
    printf("뒤집힌 영단어: %s \n", voca);
    return 0; 
}