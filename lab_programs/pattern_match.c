#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 101  // Maximum length of the string

// Function to find the first occurrence of the pattern in the text
int nfind(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);

    // Match the pattern from the end to the beginning
    for (int i = n - m; i >= 0; i--) {
        int j;
        for (j = m - 1; j >= 0 && pattern[j] == text[i + j]; j--);
        if (j < 0) {
            return i;  // Pattern found
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
    int index = nfind(text, pattern);
    if (index >= 0) {
        printf("Pattern found at index %d\n", index);
    } else {
        printf("Pattern not found\n");
    }

    return 0;
}

