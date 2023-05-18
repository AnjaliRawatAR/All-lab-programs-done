#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int prime(int);
void printp(int);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    printp(n);
    
    return 0;
}
int prime(int m) {
    if(m<=1){
        return 0;
    }
    for(int i=2;i<=sqrt(m);i++){
        if(m%i==0){
            return 0;
        }
    }
    return 1;
}
void printp(int n) {
    for(int m=2;m<= n; m++) {
        if (prime(m)) {
            printf("%d,",m);
        }
    }
    printf("\n");
}
