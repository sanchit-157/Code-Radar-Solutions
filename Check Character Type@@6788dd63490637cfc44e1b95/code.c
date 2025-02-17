#include <stdio.h>
#include <ctype.h> 

int main() {
    char input;
    scanf("%c", &input);

    
    if (isalpha(input)) {  
        input = tolower(input);
        if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }

    else if (isdigit(input)) {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }

    return 0;
}
