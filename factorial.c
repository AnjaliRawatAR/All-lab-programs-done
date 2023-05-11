//to print factorial of a number
#include <stdio.h>

int main()
{
    int n,f,i;
    scanf("%d",&n);
    f=1;
    for (i=1;i<=n;i++){
         f=f*i;
    }
    printf("the factorial of the given number %d is %d",n,f);
    return 0;
}