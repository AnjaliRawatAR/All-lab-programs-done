//t reverse a number 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,k,c=0;
     scanf("%d",&a);
     k=log10(a)+1;
     for(int i=1;i<=k;i++){
          b=a%10;
          c=(c*10)+b;
          a=(int)a/10;
         
     }
     printf("%d",c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}