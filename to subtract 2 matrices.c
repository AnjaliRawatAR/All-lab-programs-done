/WAP to subtract 2 matrix
#include <stdio.h>

void main()
{
     int n,m;
     scanf("%d",&n);
     scanf("%d",&m);
     int a[n][m],b[n][m],c[n][m],i,j;
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               scanf("%d",&a[i][j]);
          }
     }
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               scanf("%d",&b[i][j]);
          }
     }
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }
     printf("\n");
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               c[i][j]=a[i][j]-b[i][j];
               printf("%d ",c[i][j]);
          }
          printf("\n");
     }
}