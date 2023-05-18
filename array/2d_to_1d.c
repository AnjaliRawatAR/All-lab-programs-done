#include<stdio.h>
int main(){
    int a[2][2],i,j,k=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array entered is:\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%d",a[i][j]);
        }
        printf("\n");
    }
    int *b[4]; 
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            b[k++]=&a[i][j];
        }
    }
    printf("The new array is:\n");
    for(j=0;j<4;j++){
        printf("%d ",b[0][j]);
    }
    return 0;
}