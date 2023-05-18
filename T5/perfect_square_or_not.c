#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int T,N;
    float s;
    double n;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%lf",&n);
        s=sqrt(n);
        N=s;
        if(N==s){
            printf("Perfect Square\n");
        }
        else{
            printf("Not a Perfect Square\n");
        }
    }

    return 0;
}