#include <stdio.h>
#include <math.h>

float degtorad(float arg);
float trap_area(float arg[],int size);

int main(void)
{
	float degang,radang;
	float ar;
	float arr[12];	
	degang = 0.0;
	for (int i = 0;i < 13;i++)
		{
		radang= degtorad(degang);
		arr[i]= tan(radang);
		printf("Degree %f , Rad %f \n",degang,radang);
		degang= degang + 5.0;
		}
	ar = trap_area(arr,12);
	ar = ar *((radang - 0)/ ((float)2*(12)));
	printf("Area %f\n",ar);

	return 0;
}

float degtorad(float arg){
	float pi= 3.1415927;
	return ((pi*arg)/180.0);
}

float trap_area(float arg[],int size){
	float sum= 0.0;
	sum = arg[size] + arg[0];
	for (int i=1; i< size ;i++)
	{
	sum= sum + 2*arg[i];
	}
	return sum;

}
