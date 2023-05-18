#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q, r, X;
    char C;
    scanf("%d %d", &N,&Q);
    r = N;

    for (int i = 0; i < Q; i++) {
        scanf(" %c %d", &C, &X);

        switch (C) {
            case '+':
                r += X;
                break;
            case '-':
                r -= X;
                break;
            case '*':
                r *= X;
                break;
            case '/':
                r /= X;
                break;
            case '%':
                r %= X;
                break;
            case '&':
                r &= X;
                break;
            case '|':
                r |= X;
                break;
            case '^':
                r ^= X;
                break;
            default:
                printf("Invalid operator\n");
        }
    }
    printf("%d", r);

    return 0;
}