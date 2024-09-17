// program to sum of all odd and even number between 1 to n
#include <stdio.h> //header file for use of inbuilt library 
int main() //main function 
{
    int num, i, even_sum, odd_sum; //declare variable
    printf("enter the value of n :"); // limit number between which sum of odd and even number want to find 
    scanf("%d", &num);
    for (i = 0; i <= num; i++) //i use as loop variable
    {
        if(i%2==0)  //remainder will be zero for even number
        {
            even_sum += i;
            
        }
        else
        {
            odd_sum += i;
        }
    }
    printf("\nsum of even number:  %d", even_sum);
    printf("\nsujm of odd:  %d", odd_sum);
    return 0;
}