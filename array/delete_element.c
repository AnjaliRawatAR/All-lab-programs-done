#include <stdio.h>
int main(){
    int n,i,v;
    int pos,f=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value element to be deleted:");
    scanf("%d",&v);
    for(i=0;i<n;i++){
        if(a[i]==v){
            f=1;
            pos=i;
            break;
        }
    }
    if(f==1){
        for(i=pos;i<=n-1;i++){
            a[i]=a[i+1];
        }
    }
    else{
        printf("Element not found in array");
    }
    printf("\nArray after deletion of element is:\n");
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }

    return 0;
}