#include <stdio.h>

void fibonacci_step(int Fn, int Fn_minus_1) {
    // Update Fibonacci values
    int Fn_minus_2 = Fn_minus_1;
    Fn = Fn + Fn_minus_2;
    Fn_minus_1 = Fn_minus_2; // Update Fn−1 to the previous Fn
}

void fibonacci_series(int n) {
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return;
    }

    int Fn_minus_2 = 0; // F0
    int Fn_minus_1 = 1; // F1
    int Fn = 0;

    if (n >= 0) {
        printf("%d ", Fn_minus_2); // Print F0
    }
    if (n >= 1) {
        printf("%d ", Fn_minus_1); // Print F1
    }

    for (int i = 2; i <= n; i++) {
        fibonacci_step(&Fn, &Fn_minus_1);
        printf("%d ", Fn);
        Fn_minus_2 = Fn_minus_1; // Update Fn−2 to the previous Fn−1
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fibonacci_series(n);
    return 0;
}
