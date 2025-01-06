//while 반복문을 사용해 1부터 100까지의 숫자를 증가시키면서 짝수만 출력하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i = 1;

    // while 문을 이용해 i가 100 이하일 때만 반복하도록 만들어보세요.
    while ( i <= 100) {
        // if 문을 이용해 i가 짝수인지 판별한 뒤 출력하세요.
        if ( i%2 == 0 ) {
            printf("%d ", i);
        }
        // i를 적절히 증가시키는 부분을 추가하세요.
        i++;
    }

    return 0;
}