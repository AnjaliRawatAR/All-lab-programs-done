#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int P,R,T,S,A;
    scanf("%d\n%d\n%d",&P,&R,&T);
    S=(P*R*T)/100;
    A=P+S;
    printf("%d",A);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
