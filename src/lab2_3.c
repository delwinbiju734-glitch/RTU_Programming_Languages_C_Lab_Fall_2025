#include <stdio.h>
#include <math.h>

// Function to check if n is prime
int is_prime(int n) {
    if (n < 2) return 0;  // numbers less than 2 are not prime

    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // divisible by i, not prime
        }
    }
    return 1;  // prime
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Error: n must be greater than or equal to 2.\n");
    } else {
        printf("Prime numbers up to %d:\n", n);
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}


