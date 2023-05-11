//to convert cm to m to km

#include <stdio.h>

void main()
{
    float len,m,km;
    scanf("%f",&len);
    printf("\n length in cm:%0.3f",len);
    m=len/100;
    printf("\n length in m:%0.3f",m);
    km=len/100000;
    printf("\n length in km:%0.3f",km);
    
}