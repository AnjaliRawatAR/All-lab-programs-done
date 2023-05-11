//wap to check if a matirix is identity matrix or not 
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
    int k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j && a[i][j]!=1){
                k=-1;
                break;
            }
            else if(i!=j && a[i][j]!=0){
                k=-1;
                break;
            }
        }
    }
    if(k==0){
        printf("Given matrix is identity matrix");
    }
    else{
        printf("The given matrix is not an identity marix");
    }
}