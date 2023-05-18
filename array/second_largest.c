#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int largest=a[0][0];
    int seclargest=a[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]>largest){
                seclargest=largest;
                largest=a[i][j];
            }
            else if(a[i][j]>seclargest && a[i][j]<largest){
                seclargest=a[i][j];
            }
        }
    }
    printf("\n");
    printf("%d is the second largest term in the given array",seclargest);
    
    return 0;
}