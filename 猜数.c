#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUMBER 100

void guesses(int secret_number)
{
	int num_guesses=0,guess;
	
	while(1){
		num_guesses++;
		printf("Enter guess: ");
		scanf("%d",&guess);
		if(guess==secret_number){
			printf("You won in %d guesses!\n\n",num_guesses);
			return;
		}
		else if(guess<secret_number){
			printf("Too low;  try again.");
		}
		else{
			printf("Too high;  try again.");
		}
	}
}

int main(void)
{
	int secret_number;
	char command='y';
	
	printf("Guess the secret number between 1 and %d.\n\n",MAX_NUMBER);
	srand((unsigned) time(NULL));
	
	do{
		secret_number = rand() % MAX_NUMBER + 1;
		printf("A new number has been chosen.\n");
		guesses(secret_number);
		printf("Play again? (Y/N) ");
		scanf(" %c",&command);
		printf("\n");
	}while(command=='y'||command=='Y');
	
	printf("Welcme to again Oh!");
	
	return 0;
 } 
