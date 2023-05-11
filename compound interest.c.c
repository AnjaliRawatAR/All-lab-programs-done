//to calculate the compound interest


#include <stdio.h>
#include <math.h>
void main ()
{
    int P,R,N,T;
    float compound;
    printf("Enter the principal, rate of interest, time");
    scanf ("%d%d%d", &P,&R,&T);
    printf ("The Principal is:%d", P);
    printf ("\nThe Rate of Interest is:%d", R);
    printf ("\nThe Time(in years) is:%d", T);
    compound = P* (pow((1 + R/100), T));
    printf ("\nCompund interest:%0.5f",compound);
    
}