#include <stdio.h>
#include <stdlib.h>

int main()
{
    int period;
    printf("enter the period(1,2,3,4)\n");
    scanf("%d",&period);
    switch(period)
    {
        case 1:
            printf("the first period is Mathematics\n");
            printf("the class starts at 7:15 and ends at 8:15");
            break;
        case 2:
            printf("the second period is CP\n");
            printf("the class starts at 8:15 and ends at 9:15");
            break;
        case 3:
            printf("the third period is CO\n");
            printf("the class starts at 10:15 and ends at 11:15");
            break;
        case 4:
            printf("the last period is Physics\n");
            printf("the class starts at 11:15 and ends at 12:15");
            break;
        default:
            printf("You can go home now :) \n");
    }
    return 0;
}
