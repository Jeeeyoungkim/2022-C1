#include <stdio.h>

void mod(int);

int main(void){
    int num;

    printf("Please enter a number : ");
    scanf("%d", &num);

    TentoTwo(num);
    return 0;
}

int TentoTwo(int n)
{
	int result = n % 2;
	n /= 2; // n = n/2 (n을 2 값으로 나눈 몫) 
	if (n > 0) // ex) 1 /= 2 --> 몫(n) = 0, n>0 조건 만족 X --> 조건문 빠져나오게 됨. 
		TentoTwo(n); // 재귀함수
	printf("%d", result);
	return 0;
}