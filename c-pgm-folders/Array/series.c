#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Determine the number of Fibonacci numbers and primes needed
    int fib_count = (n + 1) / 2;   // Number of Fibonacci numbers needed
    int prime_count = n / 2;       // Number of primes needed

    // Arrays to hold Fibonacci numbers and prime numbers
    int fib[fib_count];
    int primes[prime_count];

    // Generate Fibonacci numbers
    int t1 = 0, t2 = 1, nextTerm;
    for (int i = 0; i < fib_count; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        fib[i] = t1;
    }

    // Generate prime numbers
    int count = 0;
    for (int i = 2; count < prime_count; i++) {
        int flag = 0;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            primes[count++] = i;
        }
    }

    // Print the series
    int f = 0, p = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d", fib[f++]);
        } else {
            printf("%d", primes[p++]);
        }
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
