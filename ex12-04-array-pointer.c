#include <stdio.h>

int main(void)
{
    int iarr[2][3] = {1, 2};

    int num1;

    int *iarrptr = iarr;

    printf("iarr[0]: %d\n", iarr[0]);
    printf("iarrptr[0]: %d\n", iarrptr[0]);
    printf("*iarrptr: %d\n", *(iarrptr+1));

    printf("\n");

    printf("iarr[2]: %d\n", iarr[1]);
    printf("iarrptr: %p\n", (iarrptr));
    printf("iarrptr+1: %p\n", (iarrptr+2));

    printf("num1 : %d\n", num1);

    return 0;

}