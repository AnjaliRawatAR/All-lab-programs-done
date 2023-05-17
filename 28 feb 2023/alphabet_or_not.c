#include <stdio.h>
int main(){
    char a;
    printf("Enter:");
    scanf("%c",&a);
    if((a>='a' && a<='z') || (a>='A' && a<='Z') ){
        printf("Alphabet");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}