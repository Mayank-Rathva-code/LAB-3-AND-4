// check whether a number is armstrong or not
/*#include <stdio.h>
int main()
{
    int num = 153, i, sum = 0;
    while (num != 0)
    {
        i = num % 10;
        int x = i * i * i;
        sum += x;
        num = num / 10;
    }
    printf("sum=%d", sum);
    if (sum == 153)
    {
        printf("\narmstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }
}*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, count = 0, sum = 0, x, y;
    printf("enter the number:");
    scanf("%d", &num);
    x = num;
    y = num;
    while (num != 0)
    {
        i = num % 10;
        count += (i / i);
        num /= 10;
    }
    while (x != 0)
    {
        i = x % 10;
        sum += pow(i, count);
        x /= 10;
    }

    if (y == sum)
    {
        printf("\n IT IS A ARMSTRONG NUMBER ");
    }
    else
    {
        printf("\n IT IS NOT A ARMSTRONG NUMBER ");
    }
    return 0;
}
/*#include <stdio.h>
int main()
{
    int num, i, count = 0, sum = 1, x, y;
    printf("enter the number:");
    scanf("%d", &num);
    x = num;
    y = num;
    while (num != 0)
    {
        i = num % 10;
        count += (i / i);
        num /= 10;
    }
    while (x > 0)
    {
        i = x % 10;
        while (count > 0)
        {
            sum = sum * i;
            count--;
        }
        x /= 10;
    }
    printf("%d",sum);
    return 0;
}*/
