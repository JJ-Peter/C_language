/*Name:计算箱子的重量
*Time:2021/1/18
*Author:Peter 
*/

#include<stdio.h>
#define CUBIC_INCHES_PER_PUOND 194

int main(void)
{
	int height,length,width,volumn;
	float weight;
	
	printf("If you enter 0, it will log out.\n\n");
	while(1){
		printf("Enter the value of height:");
		scanf("%d",&height);
		printf("Enter the value of length:");
		scanf("%d",&length);
		printf("Enter the value of width:");
		scanf("%d",&width);
		
		if(height>0&&length>0&&width>0){
			volumn = height*length*width;
			weight = (float) (volumn + CUBIC_INCHES_PER_PUOND-1) / CUBIC_INCHES_PER_PUOND; 
			printf("volumn = %d\nweight = %.2f\n\n",volumn,weight);
		}
		else{
			printf("log out\n");
			break;	
		} 
	}
	return 0;
 }
