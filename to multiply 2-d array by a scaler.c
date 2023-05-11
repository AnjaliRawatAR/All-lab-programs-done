//WAP to multiply a matrix by a scalar
#include <stdio.h>

void main()
{
     int n,m;
     scanf("%d",&n);
     scanf("%d",&m);
     int a[n][m],b[n][m],i,j; //,c[n][m]
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
     int k;
     printf("enter any scalar value:");
     scanf("%d",&k); 
     printf("\n");
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               b[i][j]=k*a[i][j];
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }

}