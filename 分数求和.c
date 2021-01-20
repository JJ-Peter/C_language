/*
*Name:Tot up the fractions
*Time:2021/1/20
*Author:Peter Gu
*/

#include<stdio.h>

//work out the greatest common faactor
int Getgcd(int a,int b)
{
	int temp, i;
	if(a<b){
		temp = a;
		a = b;
		b = temp;
	}
	if(a%b==0){
		return b;
	}
	else{
		return Getgcd(b,a%b);
	}
}

int main(void)
{
	printf("Enter the amount of fractions you want to add: ");
	int amount;
	scanf("%d",&amount);
	printf("\n");
	
	int denominator[amount], numerator[amount];
	int i, j;
	for(i=0;i<amount;i++){
		printf("µÚ%d¸ö:",i+1);
		scanf("%d/%d",&numerator[i],&denominator[i]);
		if(denominator[i]==0){
			printf("Please enter the fraction again.\n");
			i=i-1;
		}         						// get rid of the 0 in the denominator
	}
	
	int denom = 1;
	for(i=0;i<amount;i++){
		denom = denom * denominator[i];
		}
		int numer = 0, a[amount];
	for(i=0;i<amount;i++){
		a[i]=numerator[i];
		for(j=0;j<amount;j++){
			a[i]= a[i] * denominator[j];
		}
		a[i]=a[i] / denominator[i];
		numer = numer + a[i];
	}											//reduction of fractions to a common denominator
	
	int gcd;
	gcd = Getgcd(numer,denom);
	if(denom / gcd==1){
		printf("The sum = %d",numer/gcd);
	}
	else{
		printf("The sum = %d/%d",numer / gcd,denom / gcd);
	}					
	
	return 0;
 } 
