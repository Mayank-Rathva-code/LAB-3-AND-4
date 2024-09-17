#include <math.h> //header file ,used in program fpr pow() use 
#include <stdio.h>
int main()
{
    int x, n, z; //declare variables 
    printf("enter the value of x=");
    scanf("%d", &x);
    printf("enter the value of n=");
    scanf("%d", &n);
    z = pow(x, n);  //pow(base,exponent) inbuilt function of <math.h>
    switch (n) 
    {
    case 1:
        printf("y=%d", 1 + x);
        break;
    case 2:
        printf("y=%d", 1 + (x / n));
        break;
    case 3:
        printf("y=%d", 1 + z);
        break;
    
    default:
        printf("y=%d",1+n*x);
    }
}