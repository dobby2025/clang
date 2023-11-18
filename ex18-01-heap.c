/*
파일명: ex18-01-heap.c
*/

#include <stdio.h>

char* getString(void)
{
    char str[100];
    printf("좋아하는 단어?");
    gets(str);

    printf("함수 안에서 결과: %s\n", str);

    return str;
}

int main(void)
{
    char* result = getString();

    printf("당신이 좋아하는 단어는: %s\n", result);

    return 0;
}