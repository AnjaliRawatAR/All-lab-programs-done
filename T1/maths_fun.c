#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float n,m,p;
    scanf("%f%f", &n, &m);
    printf("%f", pow(n,m));
    scanf("%f",&p);
    printf("\n%f" , sqrt(p));
    return 0;
}
