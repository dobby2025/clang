/*
파일명: ex02-04-cast.c

자료형 변환
    데이터의 타입을 변경하는 것.
*/

#include <stdio.h>

int main(void)
{
    double number1 = 10;
    int number2 = 1.2345;
    short number3 = 70000;

    printf("number1: %f\n", number1);   // 10.000000
    printf("nubmer2: %d\n", number2);   // 1
    printf("nubmer3: %d\n", number3);   // 4464 -32,768 ~ +32,767

    printf("(short)3.1415: %d\n", (short)3.1415);   // (short)3.1415: 3
    printf("(int)3.1415: %d\n", (int)3.1415);       // (int)3.1415: 3
    printf("(double)10: %f\n", (double)10);         // (double)10: 10.000000
    printf("(float)10: %f\n", (float)10);           // (float)10: 10.000000


    return 0;
}