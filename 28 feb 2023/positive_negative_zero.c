#include <stdio.h>
int main(){
    int a;
    printf("Enter the no:");
    scanf("%d",&a);
    if(a<0){
        printf("Negative number");
    }
    else if(a==0){
        printf("Zero");
    }
    else{
        printf("Positive number");
    }
    return 0;
}