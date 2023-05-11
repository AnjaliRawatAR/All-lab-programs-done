// to check if character is alphabet or not
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    (((ch >='a' && ch <='z'))||((ch >='A' && ch <='Z')))?printf("%c is an alphabet",ch):printf("%c is not an alphabet",ch);
    
    return 0;
}