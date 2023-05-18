#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fabonacci(int);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n;
    scanf("%d",&n);
    fabonacci(n);
    return 0;
}
void fabonacci(int n){
    int a=0,b=1,i,c;
    for(i=0;i<n;++i){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
