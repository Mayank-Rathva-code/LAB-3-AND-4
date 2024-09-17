// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!+.......
#include <stdio.h>

int main()

{
    int num;
    printf("enter the max limit(N):");
    scanf("%d", &num);
    printf("%d/%d!", 1, 1);
    for (int i = 2; i <= num; i++)
    {

        printf("+%d/%d!", i, i);
    }
    return 0;
}