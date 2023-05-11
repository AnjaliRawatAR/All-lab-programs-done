//to find the power of any number x^y

#include <stdio.h>
#include <math.h>
void main()
{
    int x,y;
    printf("Enter the number and its power:\n");
    scanf ("%d%d", &x,&y);
    printf ("1st number:%d",x);
    printf ("\n the power is:%d",y);
    printf ("\n power: %f",pow(x,y));
}