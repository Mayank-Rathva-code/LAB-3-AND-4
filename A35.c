// read a number N and print a SINGLE digit answer showing sum of digit of N
#include <stdio.h>
int main()
{
    int num, sum = 0, i, sum2 = 0;
    printf("enter the number of more than 2 digit:");
    scanf("%d", &num);
    while (num != 0)
    {
        i = num % 10;
        sum = sum + i;
        num /= 10;
    }
    printf("\nsum of digits of number is %d", sum);
    while (sum != 0)
    {
        i = sum % 10;
        sum2 = sum2 + i;
        sum /= 10;
    }
    printf("\nsum in single digit is %d", sum2);
    return 0;
}

    