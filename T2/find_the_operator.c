#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    ((A+B)==(C))? printf("+"):((A-B)==C)? printf("-"):((A*B)==C)? printf("*"):((A%B)==C)? printf("%"): ((A/B)==C)?printf("/"):printf("none");  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
