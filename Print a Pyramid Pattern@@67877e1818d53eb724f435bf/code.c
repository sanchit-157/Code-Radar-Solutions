#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Print spaces for the left side of the pyramid
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars for the pyramid
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
