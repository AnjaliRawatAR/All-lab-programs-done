#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,s;
    s=0;
    i=0;
    scanf("%d",&n);
    do{
        s=s+i;
        i++;
    }
    while(i<=n);
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
