#include <stdio.h>

int main() {
    int i, j, k, n;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(k = 1; k <= i; k++) {
            printf("%d", k);
        }
        for(k = i-1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
