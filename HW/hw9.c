#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char str[50];

    printf("문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("%s ", str);

    for (int i=0; i < strlen(str); i++){
        if (isupper(str[i])){
            str[i] = str[i]-'A'+'a';
        } else if (islower(str[i])) {
            str[i] = str[i]-'a'+'A';
        } else {
            str[i] = str[i];
        }
    }

    printf("%s ", str);

    return 0;
}