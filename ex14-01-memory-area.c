/*
파일명: ex14-01-memory-area.c

코드 영역
    메모리의 코드 영역은 실행프로그램 코드가 저장되는 영역
    CPU는 코드 영역에 저장된 명령어를 하나씩 가져와 처리

데이터 영역
    전역변수와 정적(static) 변수가 저장되는 영역
    프로그램 시작과 함께 할당되며, 프로그램 종료되면 소멸


스택 영역
    함수 호출과 관계되는 지역변수와 매개변수가 저장되는 영역
    함수 호출과 함께 할당되며, 함수 호출이 완료되면 소멸한다.

    스택은 후입선출(LIFO, Last-In First-Out) 방식에 따라 동작
    가장 늦게 저장된 데이터가 가장 먼저 인출된다.

힙 영역
    사용자가 직접관리할 수 있는 메모리 영역
    힙영역은 사용자에 의해 메모리 공간이 동적으로 할당되고 해제된다.


*/

#include <stdio.h>

int outer = 10;     // 전역변수

int main(void)
{   
    int inner = 3;  // 지역변수
    inner++;
    printf("innner: %d\n", inner);

    inner++;
    printf("outer: %d\n", outer);

    return 0;
}