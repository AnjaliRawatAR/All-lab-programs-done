//to calculate the area of a triangle

#include <stdio.h>
void main()
{
    int height, base ,area;
    scanf ("%d%d", &height,&base);
    printf ("Height is:%d",height);
    printf ("\nBase is:%d", base);
    area=0.5*(height*base);
    printf ("\nArea is:%d", area);
}