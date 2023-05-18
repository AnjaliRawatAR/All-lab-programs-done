#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,r,s;
    scanf("%d",&n);
    r=0;
    while(n>0){
        s=n%10; //4,3,2,1
        r=r*10+s; //4*1000+3*100+2*10+1
        n=n/10; //123,12,1
    }
    printf("%d",r);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
