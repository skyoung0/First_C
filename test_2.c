//사용자로부터 양의 정수 N을 입력받아 1부터 N까지의 합을 구하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &N);

    // for 반복문을 사용하여 합을 구하는 부분을 완성하세요.
    for (int i = 1; i<=N;i++) {
        sum = sum + i;
    }

    printf("1부터 %d까지의 합: %d\n", N, sum);
    return 0;
}