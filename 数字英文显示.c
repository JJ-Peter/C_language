/*
*Name:Conversation between digits and English word
*Time:2021/1/25
*Author:Peter Gu
*/

#include<stdio.h>
int main(void)
{
	long long int number;
	printf("Enter a number(<=999999999999): ");
	scanf("%lld",&number);
	printf("You entered the number ");
	if(number/1000000000!=0){
		int k;
		k=number/1000000000;
		if(k>=100){
			int m=k/100;
			switch(m){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
			}
			printf(" hundred and ");
		}
		int n,x,y;
		n=k%100;
		x=n/10;
		y=n%10;
		if(n < 20){
			switch(n){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
				case 10 :printf("ten");break;
				case 11 :printf("eleven");break;
				case 12 :printf("twelve");break;
				case 13 :printf("thirteen");break;
				case 14 :printf("fourteen");break;
				case 15 :printf("fifteen");break;
				case 16 :printf("sixteen");break;
				case 17 :printf("seventeen");break;
				case 18 :printf("eighteen");break;
				case 19 :printf("nineteen");break;
			} 
		}
		else{
			switch(x){
				case 2 :printf("twenty");break;
				case 3 :printf("thirty");break;
				case 4 :printf("forty");break;
				case 5 :printf("fifty");break;
				case 6 :printf("sixty");break;
				case 7 :printf("seventy");break;
				case 8 :printf("eighty");break;
				case 9 :printf("ninety");break;
			} 
			switch(y){
				case 1 :printf("-one");break;
				case 2 :printf("-twe");break;
				case 3 :printf("-three");break;
				case 4 :printf("-four");break;
				case 5 :printf("-five");break;
				case 6 :printf("-six");break;
				case 7 :printf("-seven");break;
				case 8 :printf("-eight");break;
				case 9 :printf("-nine");break;
			}
		}
		printf(" billion and ");	
	}
	if(number%1000000000/1000000!=0){
		int k;
		k=number%1000000000/1000000;
		if(k>=100){
			int m=k/100;
			switch(m){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
			}
			printf(" hundred and ");
		}
		int n,x,y;
		n=k%100;
		x=n/10;
		y=n%10;
		if(n < 20){
			switch(n){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
				case 10 :printf("ten");break;
				case 11 :printf("eleven");break;
				case 12 :printf("twelve");break;
				case 13 :printf("thirteen");break;
				case 14 :printf("fourteen");break;
				case 15 :printf("fifteen");break;
				case 16 :printf("sixteen");break;
				case 17 :printf("seventeen");break;
				case 18 :printf("eighteen");break;
				case 19 :printf("nineteen");break;
			} 
		}
		else{
			switch(x){
				case 2 :printf("twenty");break;
				case 3 :printf("thirty");break;
				case 4 :printf("forty");break;
				case 5 :printf("fifty");break;
				case 6 :printf("sixty");break;
				case 7 :printf("seventy");break;
				case 8 :printf("eighty");break;
				case 9 :printf("ninety");break;
			} 
			switch(y){
				case 1 :printf("-one");break;
				case 2 :printf("-twe");break;
				case 3 :printf("-three");break;
				case 4 :printf("-four");break;
				case 5 :printf("-five");break;
				case 6 :printf("-six");break;
				case 7 :printf("-seven");break;
				case 8 :printf("-eight");break;
				case 9 :printf("-nine");break;
			}
		}
		printf(" million and ");
	}
	if(number%1000000000%1000000/1000){
		int k;
		k=number%1000000000%1000000/1000;
		if(k>=100){
			int m=k/100;
			switch(m){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
			}
			printf(" hundred and ");
		}
		int n,x,y;
		n=k%100;
		x=n/10;
		y=n%10;
		if(n < 20){
			switch(n){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
				case 10 :printf("ten");break;
				case 11 :printf("eleven");break;
				case 12 :printf("twelve");break;
				case 13 :printf("thirteen");break;
				case 14 :printf("fourteen");break;
				case 15 :printf("fifteen");break;
				case 16 :printf("sixteen");break;
				case 17 :printf("seventeen");break;
				case 18 :printf("eighteen");break;
				case 19 :printf("nineteen");break;
			} 
		}
		else{
			switch(x){
				case 2 :printf("twenty");break;
				case 3 :printf("thirty");break;
				case 4 :printf("forty");break;
				case 5 :printf("fifty");break;
				case 6 :printf("sixty");break;
				case 7 :printf("seventy");break;
				case 8 :printf("eighty");break;
				case 9 :printf("ninety");break;
			} 
			switch(y){
				case 1 :printf("-one");break;
				case 2 :printf("-twe");break;
				case 3 :printf("-three");break;
				case 4 :printf("-four");break;
				case 5 :printf("-five");break;
				case 6 :printf("-six");break;
				case 7 :printf("-seven");break;
				case 8 :printf("-eight");break;
				case 9 :printf("-nine");break;
			}
		}
		printf(" thousand and ");
	} 
	if(number%1000000000%1000000%1000!=0){
		int k;
		k=number%1000000000%1000000%1000;
		if(k>=100){
			int m=k/100;
			switch(m){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
			}
			printf(" hundred and ");
		}
		int n,x,y;
		n=k%100;
		x=n/10;
		y=n%10;
		if(n < 20){
			switch(n){
				case 1 :printf("one");break;
				case 2 :printf("two");break;
				case 3 :printf("three");break;
				case 4 :printf("four");break;
				case 5 :printf("five");break;
				case 6 :printf("six");break;
				case 7 :printf("seven");break;
				case 8 :printf("eight");break;
				case 9 :printf("nine");break; 
				case 10 :printf("ten");break;
				case 11 :printf("eleven");break;
				case 12 :printf("twelve");break;
				case 13 :printf("thirteen");break;
				case 14 :printf("fourteen");break;
				case 15 :printf("fifteen");break;
				case 16 :printf("sixteen");break;
				case 17 :printf("seventeen");break;
				case 18 :printf("eighteen");break;
				case 19 :printf("nineteen");break;
			} 
		}
		else{
			switch(x){
				case 2 :printf("twenty");break;
				case 3 :printf("thirty");break;
				case 4 :printf("forty");break;
				case 5 :printf("fifty");break;
				case 6 :printf("sixty");break;
				case 7 :printf("seventy");break;
				case 8 :printf("eighty");break;
				case 9 :printf("ninety");break;
			} 
			switch(y){
				case 1 :printf("-one");break;
				case 2 :printf("-twe");break;
				case 3 :printf("-three");break;
				case 4 :printf("-four");break;
				case 5 :printf("-five");break;
				case 6 :printf("-six");break;
				case 7 :printf("-seven");break;
				case 8 :printf("-eight");break;
				case 9 :printf("-nine");break;
			}
		}
		printf(".");
	}
 } 
