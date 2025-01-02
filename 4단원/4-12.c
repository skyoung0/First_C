#include <stdio.h>

int main(void){
    int a = 10, b = 20, res;

    res = (a>b) ? a : b;
    printf("큰 값 : %d\n", res);

    return 0;
}

/*
#include <stdio.h>
int main(void){

    int a = 10, b= 20, res;

    res = (a>b) ? 300: 400;
    printf("res = %d\n",res);

}
*/