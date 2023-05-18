#include <stdio.h>
int main(){
    int n,i,pos,v;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value and position of the new element:");
    scanf("%d %d",&v,&pos);

    //shifting the elements from (position to n) to right
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=v;
    printf("\nArray after insertion of new elemet is:\n");
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}