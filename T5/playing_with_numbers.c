#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i;
    double s=0,f=1;
    scanf("%d",&n); //takes input for the series
    for(i=1;i<=n;i++){
        f=f*i;
        s+=i/f;
    }
    printf("%lf",s);
    return 0;
}
