/*
파일명: ex07-02-conditional.c

2. switch 문
    특정 변수의 값을 기준으로 여러가지 경우(case) 중 하나를 선택하여
    실행할 수 있는 제어문

*/
#include <stdio.h>

int main(void)
{

    int num = 1;
    switch (num)
    {
    case 0:
        printf("0 입니다.\n");
        break;
    case 1:
        printf("1 입니다.\n");
        break;
    case 2:
        printf("2 입니다.\n");
        break;
    case 3:
        printf("3 입니다.\n");
        break;
    default:
        printf("0 ~ 3 이 아닙니다.");
        break;
    }


    char btn = 'a';

    switch(btn)
    {
    case 'w':
        printf("앞으로 이동\n");
        break;
    case 'a':
        printf("좌측으로 이동\n");
        break;
    case 's':
        printf("우측으로 이동\n");
        break;
    case 'd':
        printf("뒤로 이동\n");
        break;   
    default:
        printf("Hold!\n");
        break;
    }

    /*
    환불단계
        1. 환불신청
        2. 환불검토 (검토중)
        3. 이체중
        4. 환불완료
    */

    int returnCode = 1;

    switch(returnCode)
    {
    case 1:
    case 2:
    case 3:
        printf("환불 불가입니다. 상태코드: %d\n", returnCode);
        break;
    }

    if(returnCode == 1 || returnCode == 2 || returnCode == 3) {
         printf("환불 불가입니다. 상태코드: %d\n", returnCode);
    }

    return 0;
}