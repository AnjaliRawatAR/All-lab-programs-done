#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int C,N,D,A;
    scanf("%d\n%d\n%d",&C,&N,&D);
    A=(N*D+C)-N;
    printf("%d",A);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}