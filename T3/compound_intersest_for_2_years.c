#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float P,R,T,A,D,C;
    scanf("%f\n%f",&P,&R);
    T=2;
    A=(1+R/100);
    D=pow(A,T);
    C=P*D-P;
    printf("%.2f",C);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
