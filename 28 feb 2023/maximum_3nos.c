#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the three nos:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is the largest amongst three",a);
    }
    else if(b>a && b>c){
        printf("%d is the largest amongst three",b);
    }
    else{
        printf("%d is the largest amongst three",c);
    }
    return 0;
}