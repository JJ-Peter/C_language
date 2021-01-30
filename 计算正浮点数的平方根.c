/*
*Name:Calculate square root by Newton method
*Time:2021/1/30
*Author:Peter Gu
*/

#include<stdio.h>

double square_root(double x)
{
	double y,k;
	y=1.0;

	while(y*y-x<-0.00001||y*y-x>0.00001){
		k=(y+x/y)/2.0;
		y=k;
	}
	return y;
} 					//Newton step

int main(void)
{
	float x,sqrt;
	
	printf("Enter a positive number: ");
	scanf("%f",&x);
	sqrt=square_root(x);
	printf("Square root: %g",sqrt);

	return 0;
 }
