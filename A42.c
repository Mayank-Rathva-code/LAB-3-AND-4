//READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
// program to check whether the number is prime or not
#include <stdio.h>  //header file
int main()
{
    //prime num is divide by 1 and itself only like 2,3,5,7,11,13,.....
    int num, i, count;  //declare variables
    printf("enter the number:");
    scanf("%d", &num);
    if (num == 0 || num == 1) //0 and 1 are not a prime number 
    {
        printf("not prime number");
    }

    for (i = 2; i <=num/2; i++) 
    {
        if (num % i == 0) //when remainder is zero then it is not prime number 
        {
            count = 1; //when num is not prime then 1 store in variable 
            break;
        }
        
    }
    if (count == 1)
    {
        printf("composite number");
    }
    else
    {
        printf("\n%d is prime number", num);
    }
    return 0;
}
