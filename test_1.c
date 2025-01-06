#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    // 여기에 if 문을 사용해서 짝수, 홀수를 판별하도록 빈칸을 채우세요.
    if (num%2 == 0) {
        printf("짝수입니다.\n");
    } else {
        printf("홀수입니다.\n");
    }

    return 0;
}