#include <stdio.h>
#include <math.h>

int main() {
    int N = 12; // Total number of points
    double a,sum = 0.0; // Starting point
    double b = M_PI / 3; // Ending point
    double step = (b - a) / (N - 1); // Calculate the step size

    printf("Equidistant points between %f and %f:\n", a, b);
    for (int i = 0; i < N; i++) {
        double x = a + i * step; // Calculate each point
        printf("x[%d] = %f\n", i, x);
	sum = sum + 2*tan(x);
    }

sum= (sum+a+b)*((b-a)/(float)N);



    return 0;
}
