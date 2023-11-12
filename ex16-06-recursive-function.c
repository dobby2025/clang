/*
파일명: ex16-06-recursive-function.c
*/

#include <stdio.h>


int sayHello(int count)
{
    printf("Hello!\n");

    if (count == 3) 
    {
        return count;
    }

    sayHello(count + 1);
}

int main(void)
{
    // 재귀함수 호출
    int result = sayHello(1);
    printf("result: %d\n", result);

    return 0;
}