#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
    {
        printf("%c is a vowel",ch);
    }
    else
    {
        printf("%c is not a vowel",ch);
    }
    return 0;
}