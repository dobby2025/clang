/*
파일명: ex10-01-pointer.c

포인터
    메모리의 주소값을 의미하며 주소값을 저장하는 변수를 가리켜
    '포인터 변수' 라고 한다.
    & 주소연산자 : 변수 앞에 붙어서 변수의 메모리 시작 주소값을 구한다.
    * 포인터 : 포인터변수를 선언할 때 사용
    * 간접 참조 연산자(dereference operator, indirection operator)
       : 선언된 포인터 변수가 가리키는 변수
*/
#include <stdio.h>

int main(void)
{
    int inum = 999;

    int *iptr = &inum;

    printf("%p\n", &inum);  // 00000000005FFE9C
    printf("%p\n", iptr);   // 00000000005FFE9C
    printf("%p\n", &iptr);  // 00000000005FFE90

    printf("%d\n", *iptr);

    return 0;
}