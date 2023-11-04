/*
파일명: ex06-02-operator.c

5. 비트 단위 연산자
    & : 대응이 되는 비트가 모두 1이면 1반환 (비트 AND 연산자)
    | : 대응이 되는 비트 중에서 하나라도 1이면 1 반환 (비트 OR 연산자)
    ^ : 대응이 되는 비트가 서로 다르면 1반환 (비트 XOR 연산자)
    ~ : 비트가 1이면 0으로, 0이면 1로 반전시킴 (비트 NOT 연산자)

6. 쉬프트 연산자
    << : 지정한 수만큼 비트들을 전부 왼쪽으로 이동시킴(Left Shift 연산자)
    >> : 지정한 수만큼 비트를 전부 오른쪽으로 이동시킴(Right SHift 연산자)
*/
#include <stdio.h>

int main(void)
{
    // 비트연산자
    printf("비트연산자\n");

    int a = 3; 
    int b = 5;

    printf("3 & 5 = %d\n", a & b);
    printf("3 | 5 = %d\n", a | b);
    printf("3 ^ 5 = %d\n", a ^ b);
    printf("~3 = %d\n", ~a);

    printf("\n");

    printf("시프트 연산자\n");

    int x, y;
    x = 7;  //  000111 << 2 = 011100
    y = x << 2;
    printf("%d << 2 = %d\n", x, y);

    y = x >> 2; //  000111 >> 2 = 000001
    printf("%d >> 2 = %d\n", x, y);


    
    return 0;
}
