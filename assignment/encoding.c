#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkCondition(const char *, int); //암호의 조건만족
void encode(const char *, int, const char *, char *); //암호화
void decode(const char *, int, const char *, char *); //복호화

int main(){
    char * encodingTable = "wyhfxumtjvsgenbrdzlqapcoki";
    char str[100];
    char newStr[100];

    printf("패스워드를 입력하세요 (숫자와 알파벳을 혼합하여 8-12자) : ");
    while(1) {
        scanf("%s", str);
        if (checkCondition(str, strlen(str)) == 1){
            continue;
        } else {
            break;
        }
    }

    encode(str, strlen(str), encodingTable, newStr);
    printf("입력하신 패스워드가 %s로 암호화 되었습니다.\n", newStr);
    decode(newStr, strlen(str), encodingTable, newStr);
    printf("이를 다시 복호화한 결과, 패스워드는 %s입니다.\n", newStr);

    return 0;
}

int checkCondition(const char* str, int length){
    int alCount = 0;
    int numCount = 0;

    for (int i=0; i<length; i++){
        if (isdigit(str[i])) {
            numCount++;
        } else if (isalpha(str[i])) {
            alCount++;
        }
    }
        
    if (length < 8 || length > 12) {
        printf("범위 내의 문자 수로 다시 입력하세요. : ");
        return 1;
    } else if (alCount == 0 || numCount == 0) {
        printf("숫자와 알파벳을 혼합해 주세요. : ");
        return 1;
    }
    return 0;
}

void encode(const char* str, int length, const char * encodingTable, char* newStr){
    for (int i=0; i < length; i++) {
        if (islower(str[i])) { //소문자일 때
            int idx = str[i] - 'a';
            newStr[i] = encodingTable[idx];
        } else if (isdigit(str[i])) { //숫자일 때
            newStr[i] = ((int)str[i] + 2 % 10);
        } else { //기타 문자일 때
            newStr[i] = str[i];
        }
    }
    newStr[length] = '\0';

}

void decode(const char* str, int length, const char* encodingTable, char* newStr){
    for (int i=0; i < length; i++) {
        if (islower(str[i])) { //소문자일 때
            int idx = (int)(strchr(encodingTable, str[i])- encodingTable); //테이블의 인덱스 구하기
            newStr[i] = 'a' + idx;
        } else if (isdigit(str[i])) { //숫자일 때
            newStr[i] = ((int)str[i] - 2 % 10);
        } else { //기타 문자일 때
            newStr[i] = str[i];
        }
    }
    newStr[length] = '\0';

}

