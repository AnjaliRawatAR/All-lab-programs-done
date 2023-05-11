///to read and print elements of an array
#include <stdio.h>

void main()
{
    int n;
    printf("enter the no of elements in an array: ");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}