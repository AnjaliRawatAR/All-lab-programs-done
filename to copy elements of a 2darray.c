//WAP to copy elements of a 2d array to another array
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
     int b[n][m];
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               b[i][j]=a[i][j];
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }

}