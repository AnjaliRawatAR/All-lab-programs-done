///to print the no of negative elements in an array
#include <stdio.h>

void main()
{
    int n;
    printf("enter the no of elements in an array: ");
    scanf("%d",&n);
    int a[n],i,count;
    count=0;
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            count+=1;
        }
    }
    printf("\nThe number of negative elements in an array are: %d",count);
}