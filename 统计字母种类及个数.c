/*
*Name:Count the type and number of letters
*Time:2021/1/29
*Author:Peter Gu
*/

#include<stdio.h>

int main(void)
{
	char ch;
	int vowel=0,count=0;
	
	while(1){
		printf("Enter a sentence: ");
		while((ch=getchar())!='\n'){
			if(ch>='A'&&ch<='Z'){
				ch=ch-'A'+'a';
			}
			if(ch>='a'&&ch<='z'){
				count++; 
			}
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
				vowel++;		
			}
		}
		if(vowel>0){
			printf("The sentence contains %d letters, %d vowels and %d consonants.\n",count,vowel,count-vowel);
		}
		else{
			printf("The sentence contains %d consonants(letters).\n",count);
		}
		printf("\n");
	}
	
	return 0;
 } 
