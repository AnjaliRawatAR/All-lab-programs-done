/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    float length,breadth,perimeter,area;
    printf("Enter the length of the rectangle:\n");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%f",&breadth);
    perimeter=2*(length+breadth);
    printf("perimeter of the rectangle:%0.5f\n",perimeter);
    area=length*breadth;
    printf("Area of the rectangle:%0.5f\n",area);
    
}
