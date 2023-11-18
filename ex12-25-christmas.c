/*

파일명: ex12-25-christmas.c

*/

#include <stdio.h>

int main(void) 
{

    printf("   ☆\n");
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if(j < 3 - i)
            {
                printf(" ");
            }
            else if (j > 3 + i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");

    }
    printf("  | |");
   
    return 0;
}