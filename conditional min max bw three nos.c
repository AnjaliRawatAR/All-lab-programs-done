//to find max and min b/w three numbers using conditional statements
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    ((a>b)&&(a>c))?printf("max number is: %d",a):((b>a)&&(b>c))?printf("max number is: %d",b):((c>a)&&(c>b))?printf("max number is: %d",c):printf(" ");
    printf("\n");
    ((a<b)&&(a<c))?printf("min number is: %d",a):((b<a)&&(b<c))?printf("min number is: %d",b):((c<a)&&(c<b))?printf("min number is: %d",c):printf(" ");
    
    return 0;
}