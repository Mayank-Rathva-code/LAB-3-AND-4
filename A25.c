//program to print table of any number
/*#include<stdio.h>
int main()
{
    int num,i=1;
    printf("enter the number for table:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n%d*%d=%d\n",num,i,num*i);
    }
    return 0;

}*/
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("enter the number:");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("\n%d*%d=%d\n",num,i,num*i);
        i++;
    }
}
