//to calculate simple interest

#include <stdio.h>
void main()
{
    int P,R,T,S;
    printf("Enter the principal, rate of interest, time");
    scanf ("%d%d%d", &P,&R,&T);
    printf("The Principal is:%d",P);
    printf("\nThe Rate of Interest per annum is:%d",R);
    printf("\nThe Time(in years) is:%d",T);
    S=(P*R*T)/100;
    printf("\nSimple Interest is:%d",S);
}