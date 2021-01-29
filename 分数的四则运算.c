/*
*Name:A simple calculator
*Time:2021/1/29
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
	printf("*** A simple calculator ***\n\n");
	
	int x1,x2,y1,y2,a,b,k,x,y;
	char ch;
	
	while(1){
		printf("Enter the expression: ");
		scanf("%d/%d %c %d/%d",&x1,&y1,&ch,&x2,&y2);
		if(x1==0){
			return 0;
		}
		switch(ch){
			case '+':
				if((k=Getgcd(y1,y2))!=1){
					y=y1*y2/k;	
				}
				else{
					y=y1*y2;
				}
				a=x1*y/y1; 
				b=x2*y/y2;
				printf("=%d/%d %c %d/%d\n",a,y,ch,b,y);
				x=a+b;
				if(x%y==0){
					printf("=%d\n",x/y);
				}
				else{
				printf("=%d/%d\n",x,y);
				}
				printf("\nIf you enter 0,the program will be closed.\n\n");
				break;
			case '-':
				if((k=Getgcd(y1,y2))!=1){
					y=y1*y2/k;
				}
				else{
					y=y1*y2;
				}
				a=x1*y/y1;
				b=x2*y/y2;
				printf("=%d/%d %c %d/%d\n",a,y,ch,b,y);
				x=a-b;
				if(x>=0){
					if(x%y==0){
						printf("=%d\n",x/y);
					}
					else{
						printf("=%d/%d\n",x,y);
					}
				}
				else{
					x=-x;
					if(x%y==0){
						printf("=-%d\n",x/y);
					}
					else{
						printf("=-%d/%d\n",x,y);
					}
				}
				printf("\nIf you enter 0,the program will be closed.\n\n");
				break;
			case '*':
				y=y1*y2;
				x=x1*x2;
				if(x%y!=0){
					printf("=%d/%d\n",x,y);
				}
				else{
					printf("%d\n",x/y);
				}
				a=Getgcd(x,y);
				if(a!=1){
					printf("=%d/%d\n",x/a,y/a);
				}	
				printf("\nIf you enter 0,the program will be closed.\n\n");
				break;
			case '/':
				k=x2;
				x2=y2;
				y2=k;
				ch='*';
				printf("=%d/%d %c %d/%d\n",x1,y1,ch,x2,y2);
				y=y1*y2;
				x=x1*x2;
				if(x%y!=0){
					printf("=%d/%d\n",x,y);
				}
				else{
					printf("%d\n",x/y);
				}
				a=Getgcd(x,y);
				if(a!=1){
					printf("=%d/%d\n",x/a,y/a);
				}
				printf("\nIf you enter 0,the program will be closed.\n\n");
				break;
		}
	}
 } 
