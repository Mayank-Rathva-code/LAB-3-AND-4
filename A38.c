//program to print 1,4,9,......
#include<stdio.h>
int main()
{
    int i,num,square;
    printf("enter the limit of number(N):");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        square=i*i;
        printf("%d,",square);
    }
}