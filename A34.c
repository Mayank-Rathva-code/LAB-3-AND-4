// PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
#include <stdio.h>
int main()
{
    int n, x = 0, y = 1, z;
    printf("enter a number=");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d,", x);
        z = x + y;
        x = y;
        y = z;
    }
    return 0;
}