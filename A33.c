//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include <stdio.h>
int main()
{
    int x; // variablr for total number of element input
    printf("enter how many number input:");
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        printf("%d)enter the number->",i+1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < x; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int min = arr[0];
    for (int i = 1; i < x; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf(" \nmax number is %d",max);
    printf("\nmin number is %d",min);
    return 0;
}
