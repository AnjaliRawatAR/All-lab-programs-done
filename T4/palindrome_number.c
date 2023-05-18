#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,r,s,on;
    scanf("%d",&n);
    on=n;
    r=0;
    while(n>0){
        s=n%10; 
        r=r*10+s; 
        n=n/10;
    }
    if(on==r){
            printf("Palindrome.");
        }
    else{
            printf("Not Palindrome.");
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
