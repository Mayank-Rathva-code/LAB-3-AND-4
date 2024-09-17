
// program to print sum of individual digits of a 'N' digit number
#include <stdio.h>
int main()
{
    int num, m, i = 0; //declare variable
    printf("enter thr number:");
    scanf("%d", &num);
    while (num != 0)
    {
        m = num % 10; // give the last digit of number take ex=123 then 3 is reminder
        i = i + m;    // 0+3=3
        num /= 10;    //123/10=12 then again loop start until 0
    }
    printf("%d",i);
}
