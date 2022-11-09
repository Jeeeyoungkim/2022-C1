#include <stdio.h>

int main(void){
    int score = 0;
    int a1, a2;

    printf("=== 퀴즈 프로그램 ===\n");
    printf("안녕하세요 퀴즈 챗봇입니다. 문제에 알맞는 답을 골라주세요.\n");
    printf("정답은 +2점, 오답은 -1점, 답을 고르지 않고 pass하면 0점입니다.\n");
    printf("\n");
    printf("1번 문제. 세상 사람들의 머리카락의 수를 모두 곱하면?\n");
    printf("a)계산 불가, b)무한대, c)0, 다른 문자)pass:");
    scanf(" %d", &a1);
    printf("%d", a1);
    if (a1 == 'c') {
        printf("맞았습니다.\n");
        score += 2;
    } else if (a1 == 'a' || a1 == 'b') {
        printf("정답은 c번입니다.\n");
        score -= 1;
    } else {
        printf("정답은 c번입니다.\n");
    }
    printf("\n");
    printf("2번 문제. 정말 멋진 신사가 자기 소개를 하는 것은?\n");
    printf("a)신사역, b)신사임당, c)신사참배, 다른 문자)pass:");
    scanf(" %d", &a2);

    if (a2 == 'b') {
        printf("맞았습니다.\n");
        score += 2;
    } else if (a1 == 'a' || a1 == 'c') {
        printf("정답은 b번입니다.\n");
        score -= 1;
    } else {
        printf("정답은 b번입니다.\n");
    }

    if (score == 4) {
        printf("당신의 점수는 %d점입니다. 센스가 좋으시네요.\n", score);
    } else if (score >= 1) {
        printf("당신의 점수는 %d점입니다. 조금 더 센스를 키워 주세요.\n", score);
    } else if (score >= 0) {
        printf("당신의 점수는 %d점입니다. 재미없다는 소리 가끔 들으시죠?\n", score);
    }

    return 0;
}