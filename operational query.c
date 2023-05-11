#include <stdio.h>

int main() {
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
