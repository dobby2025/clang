/*
2 X 1 = 2       3 X 1 = 3       4 X 1 = 4
2 X 2 = 4       3 X 2 = 6       4 X 2 = 8
2 X 3 = 6       3 X 3 = 9       4 X 3 = 12
2 X 4 = 8       3 X 4 = 12      4 X 4 = 16
2 X 5 = 10      3 X 5 = 15      4 X 5 = 20
2 X 6 = 12      3 X 6 = 18      4 X 6 = 24
2 X 7 = 14      3 X 7 = 21      4 X 7 = 28
2 X 8 = 16      3 X 8 = 24      4 X 8 = 32
2 X 9 = 18      3 X 9 = 27      4 X 9 = 36

5 X 1 = 5       6 X 1 = 6       7 X 1 = 7
5 X 2 = 10      6 X 2 = 12      7 X 2 = 14
5 X 3 = 15      6 X 3 = 18      7 X 3 = 21
5 X 4 = 20      6 X 4 = 24      7 X 4 = 28
5 X 5 = 25      6 X 5 = 30      7 X 5 = 35
5 X 6 = 30      6 X 6 = 36      7 X 6 = 42
5 X 7 = 35      6 X 7 = 42      7 X 7 = 49
5 X 8 = 40      6 X 8 = 48      7 X 8 = 56
5 X 9 = 45      6 X 9 = 54      7 X 9 = 63

8 X 1 = 8       9 X 1 = 9
8 X 2 = 16      9 X 2 = 18
8 X 3 = 24      9 X 3 = 27
8 X 4 = 32      9 X 4 = 36
8 X 5 = 40      9 X 5 = 45
8 X 6 = 48      9 X 6 = 54
8 X 7 = 56      9 X 7 = 63
8 X 8 = 64      9 X 8 = 72
8 X 9 = 72      9 X 9 = 81

*/

#include <stdio.h>


int main(void) 
{

    // 2 X 1 = 2       3 X 1 = 3       4 X 1 = 4
/*
2 X 1 = 2       3 X 1 = 3       4 X 1 = 4
2 X 2 = 4       3 X 2 = 6       4 X 2 = 8
2 X 3 = 6       3 X 3 = 9       4 X 3 = 12
2 X 4 = 8       3 X 4 = 12      4 X 4 = 16
2 X 5 = 10      3 X 5 = 15      4 X 5 = 20
2 X 6 = 12      3 X 6 = 18      4 X 6 = 24
2 X 7 = 14      3 X 7 = 21      4 X 7 = 28
2 X 8 = 16      3 X 8 = 24      4 X 8 = 32
2 X 9 = 18      3 X 9 = 27      4 X 9 = 36

5 X 1 = 5       6 X 1 = 6       7 X 1 = 7
5 X 2 = 10      6 X 2 = 12      7 X 2 = 14
5 X 3 = 15      6 X 3 = 18      7 X 3 = 21
5 X 4 = 20      6 X 4 = 24      7 X 4 = 28
5 X 5 = 25      6 X 5 = 30      7 X 5 = 35
5 X 6 = 30      6 X 6 = 36      7 X 6 = 42
5 X 7 = 35      6 X 7 = 42      7 X 7 = 49
5 X 8 = 40      6 X 8 = 48      7 X 8 = 56
5 X 9 = 45      6 X 9 = 54      7 X 9 = 63

8 X 1 = 8       9 X 1 = 9       10 X 1 = 10
8 X 2 = 16      9 X 2 = 18      10 X 2 = 20
8 X 3 = 24      9 X 3 = 27      10 X 3 = 30
8 X 4 = 32      9 X 4 = 36      10 X 4 = 40
8 X 5 = 40      9 X 5 = 45      10 X 5 = 50
8 X 6 = 48      9 X 6 = 54      10 X 6 = 60
8 X 7 = 56      9 X 7 = 63      10 X 7 = 70
8 X 8 = 64      9 X 8 = 72      10 X 8 = 80
8 X 9 = 72      9 X 9 = 81      10 X 9 = 90

*/

    for(int k = 0; k < 3; k++) 
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                int dan = j + 2 + (k * 3);
                int multiply = i + 1;
                int result = dan * multiply;

                if(dan > 9) break;

                printf("%d X %d = %d\t", dan, multiply, result);
            }

            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}