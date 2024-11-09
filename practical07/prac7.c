#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int x);

int main(void)
{
int order;
double e,*terms;
int i;
printf("Enter a value for order :  ");
scanf("%d", &order);
//printf("Factorial for %d order is %d \n",order,factorial(order));
terms = (double *)malloc(order *sizeof(double));

for (i=0;i<order; i++)
{

terms[i] = 1.0/(double)factorial(i);
printf("%.16lf",terms[i]);
}

e = 1.0;
for(i=0;i<order;i++)
{
e = e + terms[i];

}

printf("e is estimated as %.16lf , with differnece %e\n", e , e - exp(1.0)); 

free(terms);

return 0;
}


int factorial(int x)
{
if (x<0)
{
printf("please enter positive number ");
return -1;
}

else if (x==0)
{
return 1;
}

else
{
return x*factorial(x-1);

}

}
