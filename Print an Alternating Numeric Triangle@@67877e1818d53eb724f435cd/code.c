#include <stdio.h>

void print_numeric_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            // Alternate starting from 1 for the first row and follow the pattern for subsequent rows
            printf("%d ", (i + j) % 2);  // (i + j) ensures alternating between 0 and 1
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_numeric_triangle(n);
    return 0;
}
