#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float c,s,x,y,p,l;
    scanf("%f%f", &c, &s);
    x=s-c;
    y=c-s;
    p=((x*100)/c);
    l=((y*100)/c);
    s>c?printf("Profit\n%0.2f%%",p):printf("Loss\n%0.2f%%",l);
    return 0;
}