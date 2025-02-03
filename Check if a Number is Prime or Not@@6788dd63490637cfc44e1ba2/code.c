#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If num is divisible by any number other than 1 and itself, it's not prime
        }
    }
    return 1; // num is prime if no divisors were found
}

int main() {
    int num;
    
    scanf("%d", &num);
    
    // Check if the number is prime
    if (isPrime(num)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
