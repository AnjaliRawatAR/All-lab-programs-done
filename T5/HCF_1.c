#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    while(n1!=n2){
        if(n1>n2){
            n1-=n2;
        }
        else{
            n2-=n1;
        }
    }
    printf("%d",n1);
    return 0;
}
