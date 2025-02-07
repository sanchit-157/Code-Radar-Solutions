#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = a; i >= 1; i--) {
        for (char j = 'A'; j < 'A' + i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}
