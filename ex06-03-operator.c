/*
파일명: ex06-03-operator.c

7. 증감 연산자
    ++ : 변수의 값을 1 증가시킨다.
    -- : 변수의 값을 1 감소시킨다.

8. 삼항 연산자
    조건식 ? 참일 경우 결과 :  거짓일 경우 결과

*/

#include <stdio.h>

int main(void) 
{
    printf("증감연산자\n");

    // 전위 증감연산자
    int i = 1;
    printf("1)전위 증감연산자: %d\n", ++i); // i = i + 1, i+=1, ++i
    printf("2)전위 증감연산자: %d\n", i); 

    // 후위 증감연산자
    int j = 1;
    printf("1)후위 증감연산자: %d\n", j++); 
    printf("2)후위 증감연산자: %d\n", j);     

    printf("\n");
    
    // 삼항연산자
    printf("삼항연산자\n");

    int num = -10;
    int absolute = num > 0 ? num : num * -1;
    printf("절대값: %d\n", absolute);

    return 0;
}
