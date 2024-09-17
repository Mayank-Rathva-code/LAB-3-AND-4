// check pallindrom or not

#include <stdio.h>
int main()
{
    int i, num, rem, rev = 0;
    printf("ente the number;");
    scanf("%d", &num);
    i = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("reverse of number is %d", rev);

    if (i == rev)
    {
        printf("\n pallinderome number");
    }
    else
    {
        printf("\nnot a pallindrome number");
    }
}
