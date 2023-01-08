#include <stdio.h>

#define MAX_DEGREE 101  // Maximum degree of a polynomial

int main() {
    // Coefficients of the two polynomials
    int a[MAX_DEGREE], b[MAX_DEGREE];

    // Degree of the two polynomials
    int degree1, degree2;

    // Read in the first polynomial
    printf("Enter the degree of the first polynomial:\n");
    scanf("%d", &degree1);
    printf("Enter the coefficients of the first polynomial, from highest degree to lowest:\n");
    for (int i = degree1; i >= 0; i--) {
        scanf("%d", &a[i]);
    }

    // Read in the second polynomial
    printf("Enter the degree of the second polynomial:\n");
    scanf("%d", &degree2);
    printf("Enter the coefficients of the second polynomial, from highest degree to lowest:\n");
    for (int i = degree2; i >= 0; i--) {
        scanf("%d", &b[i]);
    }

    // Calculate the degree of the result
    int degree3 = (degree1 > degree2) ? degree1 : degree2;

    // Coefficients of the result
    int c[MAX_DEGREE] = {0};

    // Add the two polynomials
    for (int i = 0; i <= degree3; i++) {
        c[i] = a[i] + b[i];
    }

    // Print the result
    printf("Resultant polynomial: ");
    for (int i = degree3; i >= 0; i--) {
        printf("%+d", c[i]);
        if (i > 0) {
            printf("x^%d", i);
        }
    }
    printf("\n");

    return 0;
}

