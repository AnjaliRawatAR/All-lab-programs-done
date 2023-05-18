#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,num;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int max=-1000000010, min=1000000010;
        for(int j=0;j<n;j++){
            scanf("%d",&num);
            if(max<num){
                max=num;
            }
            if(min>num){
                min=num;
            }
        }
        printf("Min=%d Max=%d\n",min,max);
    }
    return 0;
}