//to print fabonnaci series
#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b,c,i;
    a=0;
    b=1;
    printf("Enter the numbers of terms:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    
    
    for (i=0;i<=n;i++){
         c=a+b;
         a=b;
         b=c;
         printf(" %d",c);
    }
    return 0;
}