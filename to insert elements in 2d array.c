//WAP to insert elements in an 2d array
#include <stdio.h>

void main()
{
     int n,m;
     scanf("%d",&n);
     scanf("%d",&m);
     int a[n][m],i,j;
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               scanf("%d",&a[i][j]);
          }
     }
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }

}