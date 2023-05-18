#include <stdio.h>
int main()
{
    int n,m;
    printf("enter the no or rows and columns:");
    scanf("%d %d",&n,&m);
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
    printf("\nOdd elements are:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]%2!=0){
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\n");
    printf("Even elements are:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]%2==0){
                printf("%d ",a[i][j]);
            }
        }
    }
    return 0;
}
