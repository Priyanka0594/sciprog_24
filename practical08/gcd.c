//Iterative & Recursive version of euclid algorithm 
// to calculate greatest common divisor
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int iterativeGCD( int a, int b)
{
	int temp;
	while(b!=0)
	{
	temp = b;
	b = a%b;
	a = temp;	
	}
    return a;
}

int recursiveGCD(int a , int b)
{

	int temp;
	if (b==0)
	{
	return a;
	}
	if (b != 0)
	{
	return (recursiveGCD(b,a%b));
	}


}

int main(){
  int a,b,error;

  printf("enter 2 positive values comma separated  to get GCD: \n");
  error = scanf("%d,%d",&a,&b);

 if(error !=2)
 { 
  printf("enter 2 integer : \n");
  return 1;
 }
 if (a<0 | b<0)
 {
  printf("Enter positive numbers only. \n");
  return 1;
 }

 printf("GCD of %d , %d is %d using iterative function \n ",a , b,iterativeGCD(a,b));
 printf("GCD of %d , %d is %d using recursive function \n ",a , b,recursiveGCD(a,b));

return 0;
}

