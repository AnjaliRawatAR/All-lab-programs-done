#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,s;
    scanf("%d",&n);
    s=0;
    while(n>0){
        i=n%10; //0,3,2,1
        s=s+i; //0+3+2+1
        n=n/10; //123,12,1
    }
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
