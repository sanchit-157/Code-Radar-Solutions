#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num & (1 << (sizeof(num) * 8 - 1))) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
