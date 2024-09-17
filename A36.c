// program to print 1,3,5,7,9,.....N
#include <stdio.h> //header file
int main() //main function
{
    int n, i;// declare variable
    printf("enter the limit of number(N):"); // prompt message
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 2)
    {
        if (i % 2 != 0 && i % 2 == 1) // remainder not be zero but remainder will be 1 for odd number
            printf("%d,", i);
    }
    return 0;
}
