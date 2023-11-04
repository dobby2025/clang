/*
파일명: ex04-02-03-scanf.c
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    float fnum1, fnum2;
    
    // printf("실수, 정수, 실수 차례대로 입력: ");
    // scanf("%f %d %f", &fnum1, &num1, &fnum2);
    // printf("입력된 값들: %f %d %f", fnum1, num1, fnum2);

    // printf("세개의 정수 입력: ");
    // scanf("%o %x %d", &num1, &num2, &num3);
    // printf("입력된 값들: %d %d %d\n", num1, num2, num3);


    // 8진수 변수 선언
    int octNum = 010;  // 8진수 10을 나타낸다.

    // 16진수 변수 선언
    int hexNum = 0xA;   // 16진수 A를 나타냅니다.

    printf("%o, %x\n", octNum, hexNum);
    printf("%d, %d\n", octNum, hexNum);

    return 0;
}