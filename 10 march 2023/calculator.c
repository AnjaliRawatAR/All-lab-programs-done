#include <stdio.h>

int main() {
    char o;
    double n1,n2,r;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &o);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch (o) {
        case '+':
            r = n1 + n2;
            printf("Sum: %.2lf\n", r);
            break;

        case '-':
            r = n1 - n2;
            printf("Difference: %.2lf\n", r);
            break;

        case '*':
            r = n1 * n2;
            printf("Product: %.2lf\n", r);
            break;

        case '/':
            if (n2 != 0) {
                r = n1 / n2;
                printf("Quotient: %.2lf\n", r);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
