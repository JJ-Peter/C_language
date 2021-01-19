/*Name:THe conversation between Celsius and Fahrenheit
*Time:2021/1/19
*Author:Peter Gu
*/ 

#include<stdio.h>
#include<string.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR 1.8f

int main(void)
{
	printf("If enter 0,then enter the Celsius temperature;\nif enter 1,then enter the Fahrenheit temperature.\n\n");
	
	int m,choose;
	float celsius,fahrenheit;
	
	while(1){
		scanf("%d",&m);
		choose=1;
		if(m==0){
			printf("Celsius temperature = ");
			scanf("%f",&celsius);
			fahrenheit = FREEZING_PT + celsius * SCALE_FACTOR;
			printf("\tWhen Celsius = %.1f, Fahrenheit = %.1f\n",celsius,fahrenheit);
		} 
		else if(m==1){
			printf("Fahrenheit temperature = ");
			scanf("%f",&fahrenheit);
			celsius = (fahrenheit - FREEZING_PT) / SCALE_FACTOR;
			printf("\tWhen Fahrenheit = %.1f, Celsius = %.1f\n",fahrenheit,celsius);
		}
		else{
			printf("The programe will break out soon.");
			break;
		}
		printf("\n");
	}
	
	return 0;
}
