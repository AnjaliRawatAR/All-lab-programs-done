#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float x;
    scanf("%f", &x);
    printf("%f", floor(x));
    printf("\n%f", ceil(x));
    return 0;
}