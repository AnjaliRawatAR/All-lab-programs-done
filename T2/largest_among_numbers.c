#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    n1>n2 && n1>n3?printf("%d",n1): n2>n3 && n2>n1?printf("%d",n2): n3>n1 && n3>n2?printf("%d",n3):printf("%d",n1);
    return 0;
}
