#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,m,d,s;
    scanf("%d", &N);
    s = 0;
    m = N;
    while (m!=0){
        d=m%10;
        s+=d;
        m/=10;
    }
    int v,c,t;
    v=s;
    c=0;
    while(v!=0){
       t=v%10;
        c+=t;
        v/=10;
    }
    printf("%d\n",c);
    return 0;
}
