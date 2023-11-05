/*
ex10-02-pointer.c
*/

#include <stdio.h>

int main(void)
{
    int num = 10;
    int *pnum;
    pnum = &num; // 포인터 변수 pnum은 num의 주소를 저장

    printf("%d\n", *pnum);

    printf("1) num의 주소값: %p\n", &num);
    printf("2) pnum의 값: %p\n", pnum);

    num = 14;

    printf("3) num의 주소값: %p\n", &num);
    printf("4) pnum의 값: %p\n", pnum);

    printf("5) pnum을 이용한 num의 값 가져오기 : %d\n", *pnum);

    *pnum = 30;
    printf("6) num: %d\n", num);
    (*pnum)++;
    (*pnum)++;
    printf("7) num: %d\n", num);
    printf("9) *pnum: %d\n", *pnum);

    return 0;
}