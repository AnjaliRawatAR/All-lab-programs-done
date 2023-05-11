***************************/
//WAP to print transpose of a matrix
#include <stdio.h>

void main()
{
     int n,m;
     scanf("%d",&n);
     scanf("%d",&m);
     int a[n][m],i,j;
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               scanf("%d",&a[i][j]);
          }
     }
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               printf("%d ",a[j][i]);
          }
          printf("\n");
     }

}