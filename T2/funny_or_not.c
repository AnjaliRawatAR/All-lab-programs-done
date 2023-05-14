#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,B,G,I,D;
    scanf("%d\n%d\n%d\n%d\n%d",&N,&B,&G,&I,&D);
    if ((B*I-G*D)<0){

        printf("Funny Questions");
    }
    else if ((B*I-G*D)>0){
        printf("Simple Questions");
    }
    else{

        printf("God Knows!");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
