/*
*Name:Summation of series
*Time:2021/1/27
*Author:Peter Gu
*/

#include<stdio.h>
int main(void)
{
	float n, sum=0.0f;
	
	printf("This program sums a series of numbers\n");
	printf("Enter numbers(0 to terminate): ");
	scanf("%f",&n);
	while(n!=0){
		sum += n;
		scanf("%f",&n);
	}
	printf("The sum is: %g\n",sum);
	
	return 0;
 } 
