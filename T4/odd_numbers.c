#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        if(i%2!=0){
            printf("%d ",i);
        }
        i++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
