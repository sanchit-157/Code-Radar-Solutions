#include <stdio.h>

int main() {
    int n;

    // Ask user for side length of the square
    scanf("%d", &n);

    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Loop through each column
        for (int j = 0; j < n; j++) {
            // Print stars at the border or at the beginning and end of each row
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
