/*
*Name:Judge a prime number
*Time:2021/2/5
*Author:Peter Gu
*/ 

#include<stdio.h>
#include<stdbool.h>

//判断素数的函数 
bool is_prime(int n)
{
	typedef int divisor;  //类型定义 
	divisor i;
	if(n<=1){
		return 0;
	}
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(void)
{
	int n;
	
	printf("If number <=0,the program will log out.\n\n");
	while(1){
		printf("Enter a number:");
		scanf("%d",&n);
		
		if(n<=0){
			return 0;
		}
		 
		if(is_prime(n)){
			printf("Prime\n\n");
		}
		else{
			printf("Not prime\n\n");
		}
		
	}
 } 
