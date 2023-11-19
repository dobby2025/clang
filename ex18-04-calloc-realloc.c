/*
파일명: ex18-04-calloc-realloc.c

calloc 함수
    메모리 공간개수와 메모리공간크기 인자를 할당받는다.
    malloc 함수와 동일한 역할

realloc 함수
    힙 영역에 할당되어 있는 메모리 공간의 크기 조절 기능을 가진 함수

*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int *ptr;   // 할당된 메모리의 주소값을 저장할 포인터
    int count = 0;  // 데이터 입력받은 개수
    int maxSize = 3;    // 할당받은 메모리크기
    int num;
    int i;

    ptr = (int*)calloc(maxSize, sizeof(int));   // malloc(sizeof(int) * maxSize)

    while(1)
    {
        printf("정수를 입력하세요(-1 입력시 종료) : ");
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }

        // 입력한 정수의 개수가 메모리 크기만큼 찼을 경우
        if(count == maxSize) 
        {
            maxSize += maxSize;
            // 재할당을 통한 메모리 영역 확장
            ptr = (int*)realloc(ptr, maxSize * sizeof(int));
        }

        ptr[count++] = num;

    }

    for(i = 0; i < count; i++)
    {
        printf("%d ", ptr[i]);
    }

    if(ptr != NULL) free(ptr);

    return 0;
}
