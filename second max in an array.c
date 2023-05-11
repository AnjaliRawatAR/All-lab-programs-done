///to read and print second maximum elements in array
#include <stdio.h>

void main()
{
    int n;
    printf("enter the no of elements in an array: ");
    scanf("%d",&n);
    int a[n],i,max,secondmax;
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    max=a[0];
    secondmax=a[1];
    for(i=0;i<n;i++){
        if(max<a[i]){
            secondmax=max;
            max=a[i];
        }
        if(a[i]>secondmax && a[i]<max){
            secondmax=a[i];
        }
        }
    printf("\nThe maximum no is: %d\n The secomd largest number is: %d",max,secondmax);
}