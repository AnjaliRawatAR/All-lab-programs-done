#include <stdio.h>
int main(){
    int n;
    printf("Enter the month no:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    {
        printf("Jan-31");
        break;
    }
    case 2:
    {
        printf("Feb-28 or 29");
        break;
    }
    case 3:
    {
        printf("Mar-31");
        break;
    }
    case 4:
    {
        printf("Apr-30");
        break;
    }
    case 5:
    {
        printf("May-31");
        break;
    }
    case 6:
    {
        printf("June-30");
        break;
    }
    case 7:
    {
        printf("July-31");
        break;
    }
    case 8:
    {
        printf("Aug-31");
        break;
    }case 9:
    {
        printf("Sep-30");
        break;
    }case 10:
    {
        printf("Oct-31");
        break;
    }case 11:
    {
        printf("Nov-30");
        break;
    }case 12:
    {
        printf("Dec-31");
        break;
    }
    default:
        break;
    }
    return 0;
}