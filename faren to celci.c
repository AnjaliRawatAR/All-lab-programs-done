//to convert temperature from farenheit to celcius

#include <stdio.h>
void main()
{
    float celci,faren;
    scanf ("%f", &faren);
    celci=(faren-32)/(1.8);
    printf ("In celsius:%0.2f",celci);
}