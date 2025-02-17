#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num & (1 << (sizeof(num) * 8 - 1))) {
        printf("set\n");
    } else {
        printf("not set\n");
    }

    return 0;
}
