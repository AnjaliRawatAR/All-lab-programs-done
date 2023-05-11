//to convert temperature from celcius to farenheit

#include <stdio.h>
void main()
{
    float celci,faren;
    scanf ("%f", &celci);
    faren=(celci*1.8)+32;
    printf ("In fahrenheit:%0.5f",faren);
}