#include <stdio.h>
#include <ctype.h> // for isupper(), islower()

int main() {
    char input;

    // Get user inpu
    scanf("%c", &input);

    // Check if the input is a letter
    if (isupper(input)) {
        printf("Uppercase\n");
    } else if (islower(input)) {
        printf("Lowercase\n");
    } else{
        printf("Not an alphabet\n");
    }

    return 0;
}
