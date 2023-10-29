/*
파일명: ex04-02-scaf.c
scanf()
    데이터 입력에 사용되는 함수
*/
#include <stdio.h>

int main(void)
{
    char character;
    int inum;
    float fnum;

    scanf("%c", &character);
    scanf("%d", &inum);
    scanf("%f", &fnum);

    printf("%c, %d, %f \n", character, inum, fnum);

    return 0;
}