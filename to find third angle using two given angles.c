//to find the third angle of the triangle using the given angles


#include <stdio.h>
void main()
{
    float x,y,z;
    printf("Enter the numbers:\n");
    scanf ("%f%f", &x,&y);
    printf ("The first angle is:%0.3f", x);
    printf ("\nThe second angle is:%0.3f", y);
    z=180-(x+y);
    printf ("\nThus third angle is:%0.3f", z);
}