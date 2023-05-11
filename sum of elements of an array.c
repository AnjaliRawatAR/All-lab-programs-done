///to read and print sum of all elements of an array
#include <stdio.h>

void main()
{
    int n;
    printf("enter the no of elements in an array: ");
    scanf("%d",&n);
    int a[n],i,sum;
    sum=0;
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("\n%d",sum);
}