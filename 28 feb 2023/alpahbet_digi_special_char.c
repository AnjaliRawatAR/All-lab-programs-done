#include <stdio.h>
int main(){
    char a;
    printf("Enter:");
    scanf("%c",&a);
    if((a>='a' && a<='z') || (a>='A' && a<='Z') ){
        printf("Alphabet");
    }
    else if(a=='*' || a=='!'|| a=='@'||a=='#'||a=='$'||a=='%'|| a=='^'|| a=='&' ||  a=='/'){
        printf("Speial character");
    }
    else{
        printf("Digit");
    }
    return 0;
}