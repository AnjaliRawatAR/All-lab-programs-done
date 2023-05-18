#include <stdio.h>
void main(){
    int n,m;
    printf("Enter the no of elements requird to enter in row:\n");
    scanf("%d",&n);
    printf("Enter the no of elements requird to enter in column:");
    scanf("%d",&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}