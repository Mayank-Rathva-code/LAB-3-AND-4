//program to print 2,4,6,8,10,......
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the limit of number(N);");
    scanf("%d",&num);
    for(i=2;i<=num;i+=2)
    {
        printf("%d,",i);
    }

    return 0;
}