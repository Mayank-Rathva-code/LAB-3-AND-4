// READ A NUMBER N AND PRINT FACTORS OF N (EX 28=1,2,4,7,14,28)
#include <stdio.h>
int main()
{
    int num, i;
    printf("enter the number:");
    scanf("%d", &num);
    for (i=1; i <= num; i++)
        
    {
        if (num % i == 0)
        {
            printf("%d,", i);
        }
    }
    return 0;
}