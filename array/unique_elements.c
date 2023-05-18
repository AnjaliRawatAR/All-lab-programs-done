#include <stdio.h>
#define m 100

void UE(int a[], int s) {
    int i, j;
    int isUnique;
    printf("Unique elements in the array: ");
    for (i=0; i<s; i++) {
        isUnique = 1;  
        for (j=0; j<s; j++){
            if (i!=j && a[i]==a[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}

int main() {
    int a[m];
    int s, i;

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    printf("Enter elements in the array:\n");
    for (i=0; i<s; i++) {
        scanf("%d", &a[i]);
    }

    UE(a, s);

    return 0;
}
