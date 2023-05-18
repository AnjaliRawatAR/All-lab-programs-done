#include <stdio.h>

int main() {
    int s,i,j;
    int count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int a[s];
    printf("Enter elements in the array:\n");
    for (i=0; i<s; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<s; i++) {
        for (j = i + 1; j < s; j++) {
            if (a[i] == a[j]) {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
