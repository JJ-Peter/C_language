/*
*Name:Reverse the order of the words in a sentence
*Time:2021/2/6
*Author:Peter Gu
*/

#include<stdio.h>

#define N 50

int main(void)
{
	char arr[N],ch,end;
	int i,j,k;
	
	printf("Enter a sentence: ");
	i=0;
	while(1){
		ch=getchar();
		if(ch=='.'||ch=='?'||ch=='!'){
			break;
		}
		arr[i++]=ch;
	}
	end=ch;
	i--;
	printf("Reversal of sentence: ");
	while(i>0){
		for(j=0;(i>=0)&&(arr[i])!=' ';i--,j++){
			;
		}                                    //Ñ°ÕÒ¿Õ¸ñ·û 
		for(k=i+1;j>0;j--){
			printf("%c",arr[k++]);
		}
		if(i>0){
			printf(" ");
		}
		i--;
	}
	printf("%c",end);
	
	return 0;
}
