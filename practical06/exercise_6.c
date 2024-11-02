#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Declare variables

int main(void)
{
int n=5,p=3,q=4;
double A[n][p];
double B[p][q];
double C[n][q];


//Initialize C to 0 , A = i+j , B = i - j
printf("---Matric B---\n");
for (int i =0;i<p;i++)
{
	for (int j=0; j<q ;j++)
	{
	B[i][j]= i - j;
	printf("%.0lf ",B[i][j]);
	}
printf("\n");
}

printf("---Array A---\n");
for (int i=0;i<n;i++)
{
	for(int j=0;j<p;j++)
	{
	A[i][j]= i+j;
	printf("%.0lf ",A[i][j]);
	}
printf("\n");
}

//initialise matrix c with 0
for (int i=0;i<n;i++)
{
	for(int j=0;j<q;j++)
	{
	C[i][j]=0;
	}
}

//Matrix multiplication to define C

for (int i=0;i<n;i++)
{

	for(int j=0;j<q;j++)
	{

		for (int k=0;k<p;k++)
		{
		C[i][j] += A[i][k]*B[k][j];
		}
	}
}

printf("---Array C---\n");
for (int i=0;i<n;i++)
{
	for(int j=0;j<q;j++)
	{
	printf("%.0lf ",C[i][j]);
	}
printf("\n");
}

return 0;
}
