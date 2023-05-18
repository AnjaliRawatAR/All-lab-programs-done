#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m,n,b,i,nod;
    float p=0;
    scanf("%d",&n);
    m=n;
    nod = log10(n)+1;
    for (i=0;i<=nod;i++){
         b=n%10;
         p+=pow(b,nod);
         n=(int)n/10;
    }
    ///printf("%0.0f",p);
    if(m==p){
         printf("Armstrong Number.");
    }
    else{
         printf("Not Armstrong.");
    }
    
    return 0;
}
