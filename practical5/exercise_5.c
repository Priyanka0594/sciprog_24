#include <stdio.h>

void fibonacci_step(int *a, int *b) {
    // Update Fibonacci values
    int  next;
    next  =*a + *b;
    *b = *a;
    *a = next;	 // Update Fn−1 to the previous Fn
}

void fibonacci_series(int n) {
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return;
    }

    int f0 = 0; // F0
    int f1 = 1; // F1

    if (n >= 0) {
        printf("%d ", f0); // Print F0
    }
    if (n >= 1) {
        printf("%d ", f1); // Print F1
    }

    for (int i = 2; i <= n; i++) {
        fibonacci_step(&f1, &f0);
        printf("%d ", f1);
            }

    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fibonacci_series(n);
    
    }
