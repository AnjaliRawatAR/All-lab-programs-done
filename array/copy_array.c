#include <stdio.h>
void main(){
    int n,m;
    printf("Enter the no rows and columns:");
    scanf("%d %d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][m];
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[i][j]=a[i][j];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
}