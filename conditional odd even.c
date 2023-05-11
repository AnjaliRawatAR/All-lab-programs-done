//to check odd even between using conditional statements
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    (a%2!=0)?printf("%d is odd",a):printf("%d is even",a);
    
    return 0;
}