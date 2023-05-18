#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("\n%d\n%d",&a,&b);
    switch(a>b){
        case 1:
            printf("%d is greater than %d",a,b);
            break;
        case 0:
            printf("%d is greater than %d",b,a);
            break;
    }
    return 0;
}