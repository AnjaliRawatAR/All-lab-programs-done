//to print radius of circle,diameter, circumference and area

#include <stdio.h>

void main()
{
    float radi,dia,circum,area;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&radi);
    dia=2*radi;
    printf("Diameter of the circle:%f\n",dia);
    circum=2*3.14*radi;
    printf("circumference of the crcle:%f\n",circum);
    area=3.14*radi*radi;
    printf("Area of the circle:%f\n",area);
    
}