#include <stdio.h>

void print_numeric_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {

            printf("%d ", j % 2);
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
