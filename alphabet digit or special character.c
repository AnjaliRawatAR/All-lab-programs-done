// alphabet or digit or special character
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is an alphabet",ch);
    } 
    else if((ch>=0 && ch<=9999999))
    {
        printf("%d is a digit",ch);
    }
    else if((ch=='*')||(ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')||(ch=='%')||(ch=='&'))
    {
        printf("%c is a special character",ch);
    }
    return 0;
}