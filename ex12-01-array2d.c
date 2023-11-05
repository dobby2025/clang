/*
파일명: ex12-01-array2d.c

2차원 배열

*/

#include <stdio.h>

int main(void)
{
    int i, j;
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d\n", arr[0][0]);
    printf("%d\n", arr[1][1]);

    // 전체 출력하기
    /*
        i = 0, 1
        j = 0, 1, 2
        arr[0][0] = 1
        arr[0][1] = 2
        arr[0][2] = 3
        1 2 3 
        arr[1][0] = 4
        arr[1][1] = 5
        arr[1][2] = 6
        4 5 6 
    */
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");

    }




    return 0;
}