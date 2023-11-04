/*
파일명: ex04-02-02-scanf.c
*/
// Visual Studio 사용시
#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    float fnum1, fnum2;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("입력된 정수들: %d %d %d \n", num1, num2, num3);
    
    return 0;
}

