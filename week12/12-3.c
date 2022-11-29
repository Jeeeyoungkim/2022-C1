#include <stdio.h>

void clearLine(){
    while(getchar()!='\n');
}

int main(void){
    char ID[7];
    char name[10];

    fputs("주민번호 입력 : ", stdout);
    fgets(ID, sizeof(ID), stdin);
    clearLine();

    fputs("이름 입력 : ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호 : %s\n", ID);

}