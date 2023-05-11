//WAP to multiply 2 matrices
#include <stdio.h>

void main()
{
     int n,m;
     scanf("%d",&n);
     scanf("%d",&m);
     int a[n][m],b[n][m],i,j,c[n][m],k;
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
     /*int k;
     printf("enter any scalar value:");
     scanf("%d",&k);*/
     
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
               c[i][j]=0;
               for(k=0;k<m;k++){
                    c[i][j]+=(a[i][k]*b[k][j]);
               }
          }
     }
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               printf("%d ",c[i][j]);
          }
          printf("\n");
     }

}