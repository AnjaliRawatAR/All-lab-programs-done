#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,S,C,H,L,T;
    scanf("%d %d %d %d %d %d",&N,&S,&C,&H,&L,&T);
 
    if (((N-L)*T)>=(S*C*H)){

        printf("Goa Jaayenge");

    }else{

          printf("Padhai Karenge");

        }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}