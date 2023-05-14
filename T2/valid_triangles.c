#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int x,y,z,m,n,o;
    scanf("%d",&n);
    for (o=1;o<=n; o=o+1){
         scanf("%d%d%d ",&x,&y,&z);
         m= x+y+z;
        (m==180)?printf("YES\n"):
        printf("NO\n");
    }   
    return 0;
}
