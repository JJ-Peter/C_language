/*
*Name:Crossword Scrabble
*Time:2021/1/28
*Author:Peter Gu
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
	printf("***Crossword Scrabble***\n\n"); 
	
	char ch;
	int sum=0;
	
	printf("Enter a word: ");
	while((ch=getchar())!='\n'){
		if(ch==' '){
			continue;
		}
		switch(toupper(ch)){
			case 'D': case 'G':
				sum += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				sum += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				sum += 4;
				break;
			case 'K':
				sum += 5;
				break;
			case 'J': case 'X':
				sum += 8; 
				break;
			case 'Q': case 'Z':
				sum += 10;
				break;
			default:
				sum++;
				break; 
		}
	}
	printf("Scrabble value: %d",sum);
	
	return 0;
}
