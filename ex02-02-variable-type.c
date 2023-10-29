/*
파일명: ex02-02-variable-type.c

C언어 기본 자료형 종류
    - 문자
        char            1byte   -128 ~ +127
    - 정수
        short           2byte   -32,768 ~ +32,767
        int             4byte   -2,147,483,648 ~ +2,147,483,647
        long            4 ~ 8byte (운영체제에 따라 달라짐) 
        long long       8byte 이상
    - 실수
        float           4byte   ±3.4X10^(-37) ~ ±3.4X10^(+38)   6-9 자리
        double          8byte   ±1.7X10^(-307) ~ ±1.7X10^(+308) 14-17 자리
        long double     8byte 이상 double 이상의 표현범위

    sizeof 연산자
        자료형 크기를 계산해서 정수값으로 반환해준다.

*/

#include <stdio.h>

int main(void) 
{

    char ch1 = 66, ch2 = 'B';
    short sh1 = 67;
    int in1 = 68;

    long ln1 = 2147483678;
    printf("%d\n", ln1);    // -2147483618

    in1 = 69;

    printf("%c\n", ch1);    // B
    printf("%c\n", ch2);    // B
    printf("%c\n", sh1);    // C
    printf("%c\n", in1);    // D

    /*
    정의 되어 있지 않은 값을 처리할 때 컴파일러는 
    가장 빠르고 정확하게 표현할 수 있는 자료형을 선택처리한다.
    */
    printf("size(100): %d\n", sizeof(100));     // 4byte
    printf("size(3.14): %d\n", sizeof(3.14));   // 8byte

    return 0;
}
