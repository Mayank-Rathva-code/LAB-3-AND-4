/*wRITE A PROGRAM IN C FOR THE FOLLOWING.
 AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
 FOLLOWS.*/

#include <stdio.h>
int main()
{
    int consumption;
    printf("enter consumed units=");
    scanf("%d", &consumption);
    float rate;
    if (consumption >= 0 && consumption <= 200)
    {
        rate = (0.5) * consumption;
    }
    else if (consumption >= 201 && consumption <= 400)
    {
        rate = (100.0 + (consumption - 200) * (0.65));
    }
    else if (consumption >= 401 && consumption <= 600)
    {
        rate = (230.0 + (consumption - 400) * (0.8));
    }
    else
    {
        rate = (425.0 + (consumption - 600) * (1.25));
    }
    printf("%f", rate);

}