//wap to print upper triangular matrix
#include <stdio.h>

void main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    printf("The upper triangular matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j>=i){
                printf("%d ",a[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}