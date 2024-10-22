#include <stdio.h>
#include <math.h>
#include <stdbool.h>


// Function to calculate arctanh using Maclaurin series
double artanh1(double x, double delta) {
    double result = 0.0;
    double term = x; // First term in the series
    int n = 0;

    while (fabs(term) >= delta) {
        result += term;
        n++;
        term = pow(x, 2 * n + 1) / (2 * n + 1); // Calculate next term
    }

    return result;
}

// Function to calculate arctanh using natural logarithms
double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main() {
    double delta;
    printf("Enter a real positive number delta for precision: ");
    scanf("%lf", &delta);
    int length =  181;
    double x_values[length];
    double results1[length]; // Results for Maclaurin series
    double results2[length]; // Results for logarithm method
    double exact_results[length]; // Exact values using standard library

    // Sampling values from -0.9 to 0.9
    for (int i = 0; i < length ; i++) {
        x_values[i] = -0.9 + i * 0.01;
        results1[i] = artanh1(x_values[i], delta);
        results2[i] = artanh2(x_values[i]);
        exact_results[i] = atanh(x_values[i]); // Using standard library function
    }

    // Compare results for both methods
    printf("\nComparison of arctanh methods:\n");
    printf("%-10s %-20s %-20s %-20s\n", "x", "Maclaurin Result", "Log Result", "Exact Result");
    for (int i = 0; i < length; i++) {
        printf("%-10.2f %-20.10f %-20.10f %-20.10f\n", x_values[i], results1[i], results2[i], exact_results[i]);
    }

    return 0;
}
