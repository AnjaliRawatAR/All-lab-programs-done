//to print area of equilateral tringle

#include <stdio.h>
void main()
{
    float side,area;
    scanf ("%f", &side);
    printf ("Side is:%0.5f",side);
    area=(1.732*side*side)/4;
    printf ("\nArea is:%0.5f",area);
}