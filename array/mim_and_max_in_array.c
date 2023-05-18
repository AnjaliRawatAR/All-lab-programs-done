#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    printf("Enter the no of columns:");
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
    int min=a[0][0],max=a[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    printf("\n");
    printf("Min=%d and Max=%d",min,max);
    return 0;
}