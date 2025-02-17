#include <stdio.h>
#include <ctype.h>

int main() {
    char input;

    
    scanf("%c", &input);
    if (isupper(input)) {
        printf("Uppercase\n");
    } else if (islower(input)) {
        printf("Lowercase\n");
    } else{
        printf("Not an alphabet\n");
    }

    return 0;
}
