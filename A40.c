// READ A NUMBER TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST
/*#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    while (num > 0)
    {
        printf("enter the number:");
        scanf("%d", &num);
        if (num < 0)
            break;
        sum += num;
    }
    printf("sum of positive number =%d", sum);
    return 0;
}*/
#include <stdio.h>
int main()
{
    int num, i = 1, sum = 0;
    for (i != 0; num >= 0; ++i)
    {
        printf("%d) ", i);
        printf("enter the number:");
        scanf("%d", &num);

        if (num < 0)
            break;
        sum += num;
    }
    printf("sum of positive number is %d", sum);
    return 0;
}
