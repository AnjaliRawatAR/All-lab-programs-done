//to print armstrong number
#include <stdio.h>
#include <math.h>

int main()
{
    int m,n,b,i,nod;
    float p=0;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    nod = log10(n)+1;
    for (i=0;i<=nod;i++){
         b=n%10;
         p+=pow(b,nod);
         n=(int)n/10;
    }
    ///printf("%0.0f",p);
    if(m=(int)p){
         printf("The given number %d is armstrong",m);
    }
    else{
         printf("The given number %d is not an armstrong number.",m);
    }
    return 0;
}