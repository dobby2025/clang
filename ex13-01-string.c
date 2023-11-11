/*
파일명: ex13-01-string.c

문자열
    C언어에서 문자열은 큰따옴표(")를 이용해서 표현
    문자열은 문자(char)로 이루어진 배열
    문자열 끝은 '\0'(null 문자)로 표시
*/

#include <stdio.h>

int main(void)
{

    char good[] = "Good!";      // 문자열의 문자 값이 각 배열에 대입된다.
    char *bad = "Bad!";         // 리터럴의 주소값이 대입
    short *sbad = "Bad!";
    char *bad2 = "Bad!";

    printf("1-1: %s\n", good);
    printf("1-2: %s\n", bad);
    printf("2-3: %p %p %p %p\n", good, bad, &("Bad!"), bad2);
    printf("%s\n", sbad);

    // 배열 기반의 문자열 변수
    good[0] = 'H';  // 값 변경 가능
    // good = "New Good";  // 변경 불가능

    // 포인터 기반 문자열 변수
    // bad[0] = 'S';    // 값 변경 불가능
    bad = "New Bad";    // 변경 가능
    char *newbad = "New Bad";

    printf("2-1: %s\n", good);
    printf("2-2: %s\n", bad);
    printf("2-3: %p %p %p\n", good, bad, &("New Bad"));

    return 0;
}