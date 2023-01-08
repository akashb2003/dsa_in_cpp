#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 101  // Maximum length of the string

// Function to compute the prefix function
void prefix(char pattern[], int pi[]) {
    int m = strlen(pattern);
    pi[0] = -1;
    int k = -1;
    for (int q = 1; q < m; q++) {
        while (k > -1 && pattern[k + 1] != pattern[q]) {
            k = pi[k];
        }
        if (pattern[k + 1] == pattern[q]) {
            k++;
        }
        pi[q] = k;
    }
}
// Function to find the first occurrence of the pattern in the text
int kmp(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);

    int pi[MAX_STRING_LEN];  // Prefix function for the pattern
    prefix(pattern, pi);

    int q = -1;  // Number of characters matched
    for (int i = 0; i < n; i++) {
        while (q > -1 && pattern[q + 1] != text[i]) {
            q = pi[q];
        }
        if (pattern[q + 1] == text[i]) {
            q++;
        }
        if (q == m - 1) {
            return i - m + 1;  // Pattern found
        }
    }

    return -1;  // Pattern not found
}

int main() {
    char text[MAX_STRING_LEN], pattern[MAX_STRING_LEN];

    // Read in the text and the pattern
    printf("Enter the text:\n");
    scanf("%s", text);
    printf("Enter the pattern:\n");
    scanf("%s", pattern);

    // Find the first occurrence of the pattern in the text
    int index = kmp(text, pattern);
    if (index >= 0) {
        printf("Pattern found at index %d\n", index);
    } else {
        printf("Pattern not found\n");
    }

    return 0;
}

