#include <stdio.h>

void print_numeric_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            // Start with 1 for the first row and alternate thereafter
            if (i == 1) {
                printf("1 ");
            } else {
                printf("%d ", j % 2);  // Alternate between 0 and 1
            }
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
