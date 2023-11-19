/*
파일명: ex18-05-malloc-realloc.c
*/

#include <stdio.h>
#include <stdlib.h>

#define INITAL_BUFFER_SIZE 1    // 초기 버퍼사이즈 1로 정의

int main(void)
{
    int c;
    int len = 0;
    int buffer_size = INITAL_BUFFER_SIZE;
    // 동적 메모리 할당으로 문자열 포인터에 메모리공간 할당
    char *str = (char*)malloc(buffer_size);

    if(str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: ");  // 사용자에게 문자열 입력 요청

    while((c = getchar()) != '\n' && c != EOF)
    {
       
        str[len++] = c; // 문자열에 문자 추가


        if(len == buffer_size)
        {
            buffer_size *= 2;   // 버퍼 사이즈를 2배로 늘림
            // 메모리 재할당으로 버퍼사이즈 늘림
            str = realloc(str, buffer_size);

            // 메모리 재할당 실패시 에러 메시지 출력후 프로그램 종료
            if(str == NULL)
            {
                printf("Memory allocation failed\n");
                return 1;
            }
        }
    }
    str[len] = '\0'; // 문자열 끝에 NULL 문자 추가
    printf("You entered %s\n", str);

    free(str); // 동적으로 할당한 메모리 해제

    return 0;
}