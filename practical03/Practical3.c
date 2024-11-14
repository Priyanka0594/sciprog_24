#include <stdio.h>
#include <math.h>

int main() {
    int N = 12; // Total number of points
    double a,sum = 0.0; // Starting point
    double b = M_PI / 3; // Ending point
    double step = (b - a) / (N - 1); // Calculate the step size
	double diff;

    printf("Equidistant points between %f and %f:\n", a, b);
	sum= tan(a)+tan(b);
    for (int i = 0; i < N; i++)
   {
        double x = a + i * step; // Calculate each point
	 printf("x[%d] = %f\n", i, x);
	if (i>=1 & i<=11)
	{
	sum = sum + ( 2*tan(x));	
	printf("Sum steps %f",sum);	
}
    }

sum= (sum)*((b-a)/((float)2*(N)));
printf("Sum  %f" , sum);

printf("log 2 %lf",logf(2));
diff= sum-logf(2);
printf("differnece seen is %f",diff);


    return 0;
}
