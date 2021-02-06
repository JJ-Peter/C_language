/*
*Name:Caesar encryption
*Time:2020/2/6
*Author:Peter Gu
*/ 

#include<stdio.h>
#include<string.h>

#define N 80

int main(void)
{
	char ch,arr[N];
	int i,shift;
	
	printf("If you enter 0,the program will log out.\n\n");
	while(1){
		printf("Enter message to be encrypted:");
		gets(arr);
		if(arr[0]=='0'){
			return 0;
		}
		printf("Enter shift amount(1-25): ");
		scanf("%d%*c",&shift);			//%*c表示忽略掉一个字符型的输入项
		for(i=0;i<strlen(arr);i++){
			if(arr[i]>='A'&&arr[i]<='Z'){
				arr[i]=((arr[i]-'A')+shift)%26+'A';
			}
			else if(arr[i]>='a'&&arr[i]<='z'){
				arr[i]=((arr[i]-'a')+shift)%26+'a';
			}
		}
		printf("Encrypted message: %s\n\n",arr);
	}
 } 
