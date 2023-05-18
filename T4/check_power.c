#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,p;
    scanf("%d", &n);
    p=1; ///initialising power to 1
    for (i=0; i<n; i++) {   //to multiply power by 2 until it is equal to n
        if (p==n) {
            printf("1");  ///if p==n, the condition breaks and prints 1
            break;
        }
        p*=2; ///if p!=0, p gets multiplied by 2 and enters the loop again
    }

    if (p!=n) {
        printf("0");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
