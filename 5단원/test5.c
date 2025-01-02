/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
    int n;
    printf("정수 입력 :");
    scanf("%d", &n);
    switch (n%3)
    {
    case 0:
        printf("거짓");
        break;
    default:
        printf("참");
        break;
    }
    return 0;
}
*/

#include <stdio.h>
int main(void){
    int age = 25, chest = 95;
    char size;
    if (age < 20){
        if (chest < 85)
            size = 'S';
        else if (chest < 95)
            size = 'M';
        else
            size = 'L';
}
    else{
        if (age >= 20){
            if (chest < 90)
                size = 'S';
            else if (chest < 100)
                size = 'M';
            else
                size = 'L';
        }
    printf("사이즈 : %c\n", size);

    return 0;    
    }
}