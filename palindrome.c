//to print is a number is palindrome or not
#include <stdio.h>

int main()
{
    int n,r,s,on;
    scanf("%d",&n);
    on=n;
    r=0;
    while(n>0){
         s=n%10;
         r=r*10+s;
         n/=10;
    }
    if (on==r){
         printf("palindrome number");
    }
    else{
         printf("not a palindrome");
    }
    return 0;
}