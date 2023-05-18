#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    scanf("%d",&n);
    int s;
    for(i=0;i<=n;i++){
        s+=i;
    }
    printf("%d",s);
    return 0;
}
