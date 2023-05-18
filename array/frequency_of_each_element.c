#include <stdio.h>

#define m 100

void cf(int a[],int s) {
    int i, j;
    int f[m];
    for (i=0; i<m; i++) {
        f[i]=0; //initially frequency of all elements is 0
    }
    for (i=0; i<s; i++) {
        f[a[i]]++; 
    }
    printf("Element  Frequency\n");
    for (i=0; i<s; i++) {
        if (f[a[i]] != 0) {
            printf("%4d%10d\n", a[i], f[a[i]]);
            f[a[i]] = 0;
        }
    }
}

int main() {
    int a[m];
    int s, i;

    printf("Enter the size of the array: ");
    scanf("%d",&s);

    printf("Enter elements in the array:\n");
    for (i = 0; i < s; i++) {
        scanf("%d", &a[i]);
    }
    cf(a,s);

    return 0;
}
