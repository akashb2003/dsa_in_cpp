#include <stdio.h>
#include <stdlib.h>

// Definition of the node for the linked list
struct node {
    int coefficient;
    int exponent;
    struct node *next;
};

// Function to create a new node
struct node* createNode(int coefficient, int exponent) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(struct node **head, int coefficient, int exponent) {
    struct node *newNode = createNode(coefficient, exponent);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to add two polynomials represented as linked lists
struct node* addPolynomials(struct node *a, struct node *b) {
    // Resultant polynomial
    struct node *result = NULL;

    // Pointers to traverse the linked lists
    struct node *p1 = a, *p2 = b;

    // Loop until both linked lists are not empty
    while (p1 != NULL && p2 != NULL) {
        if (p1->exponent > p2->exponent) {
            insertNode(&result, p1->coefficient, p1->exponent);
            p1 = p1->next;
        } else if (p2->exponent > p1->exponent) {
            insertNode(&result, p2->coefficient, p2->exponent);
            p2 = p2->next;
        } else {
            // If exponents are same, add the coefficients
            insertNode(&result, p1->coefficient + p2->coefficient, p1->exponent);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    // Add remaining terms of the larger polynomial
    while (p1 != NULL) {
        insertNode(&result, p1->coefficient, p1->exponent);
        p1 = p1->next;
    }
    while (p2 != NULL) {
        insertNode(&result, p2->coefficient, p2->exponent);
        p2 = p2->next;
    }

    return result;
}

// Function to print the polynomial in standard form
void printPolynomial(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->coefficient != 0) {
            printf("%dx^%d", temp->coefficient, temp->exponent);
            if (temp->next != NULL) {
                printf(" + ");
            }
        }
        temp = temp->next;
    }
    printf("\n");
}

// Function to read a polynomial from the user
struct node* readPolynomial() {
    struct node *poly = NULL;  // Resultant polynomial
    int coefficient, exponent;

    printf("Enter the terms of the polynomial (coefficient exponent):\n");
    printf("Enter 0 0 to end the list.\n");

    // Read in the terms until the user enters 0 0
    scanf("%d%d", &coefficient, &exponent);
    while (coefficient != 0 || exponent != 0) {
        insertNode(&poly, coefficient, exponent);
        scanf("%d%d", &coefficient, &exponent);
    }

    return poly;
}


int main() {
    // Read in the first polynomial
    printf("Enter the first polynomial:\n");
    struct node *poly1 = readPolynomial();
    printf("First polynomial: ");
    printPolynomial(poly1);

    // Read in the second polynomial
    printf("\nEnter the second polynomial:\n");
    struct node *poly2 = readPolynomial();
    printf("Second polynomial: ");
    printPolynomial(poly2);

    // Add the two polynomials
    struct node *result = addPolynomials(poly1, poly2);
    printf("\nResultant polynomial: ");
    printPolynomial(result);

    return 0;
}


