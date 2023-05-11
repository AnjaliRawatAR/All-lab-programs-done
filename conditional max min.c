//to find max and min b/w two numbers using conditional statements
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    (a>b)?printf("max number is: %d\nmin number is: %d",a,b):printf("max number is: %d\nmin number is: %d",b,a);
    
    return 0;
}