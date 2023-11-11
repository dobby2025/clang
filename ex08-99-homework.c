/*
파일명: ex08-99-homework.c
1번 분석하기 
*
**
***
****
*****
******
*******

2번
   *
  **
 ***
****

3번
   *
  ***
 *****
*******

4번         i
   *        0
  ***       1
 *****      2
*******     3
 *****      4
  ***       5
   *        6


            i        j
   *        0        0 1 2   j < 3 - i    4 5 6   j > 3 + i
  ***       1        0 1     j < 3 - i      5 6   j > 3 + i
 *****      2        0       j < 3 - i        6   j > 3 + i
*******     3                j < 3 - i            j > 3 + i
 ******     4        0       j < i - 3        6   j > 9 - i
  *****     5        0 1     j < i - 3      5 6   j > 9 - i
   ****     6        0 1 2   j < i - 3    4 5 6   j > 9 - i


   *   
  ***  
 ***** 
*******
 *****
  ***
   *



*/


#include <stdio.h>

int main(void)
{

   for(int i = 0; i < 7; i++) 
   {
      for(int j = 0; j < 7; j++)
      {
         if(i < 7/2 + 1) 
         {

            if(j < 3 - i) {
               printf(" ");
            } else if(j > 3 + i) {
               printf(" ");
            } else {
               printf("*");
            }

         } else {

            if(j < i - 3) {
               printf(" ");
            } else if(j > 9 - i) {
               printf(" ");
            } else {
               printf("*");
            }

         }
      }

      printf("\n");
   }

   return 0;
}
