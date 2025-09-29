
#include <stdio.h>

// Function to compute factorial iteratively
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    if (scanf("%d", &n) != 1) {  // Check if input is valid
        printf("Error: Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: n must be a non-negative integer.\n");
    } else {
        long long result = factorial(n);
        printf("%d! = %lld\n", n, result);
    }

    return 0;
}

