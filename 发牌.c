#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#define CARD_SUITS 4
#define CARD_RANKS 13

int main(void)
{
	bool in_hand[CARD_SUITS][CARD_SUITS]={false};
	int num_cards,suit,rank;
	const char suits[4]={'c','d','h','s'};
	const char ranks[13]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
	
	printf("Enter number of cards in hand: ");
	scanf("%d",&num_cards);
	
	printf("Your hand: ");
	while(num_cards>0){
		suit=rand()%CARD_SUITS;
		rank=rand()%CARD_RANKS;
		if(!in_hand[suit][rank]){
			in_hand[suit][rank]=true;
			num_cards--;
			if(suits[suit]=='c'){
				if(ranks[rank]!='T'){
					printf("Club%c ",ranks[rank]);
				}
				else{
					printf("Club10 ");
				}
			}
			else if(suits[suit]=='d'){
				if(ranks[rank]!='T'){
					printf("Diamond%c ",ranks[rank]);
				}
				else{
					printf("Diamond10 ");
				}
			}
			else if(suits[suit]=='h'){
				if(ranks[rank]!='T'){
					printf("Heart%c ",ranks[rank]);
				}
				else{
					printf("Heart10 ");
				}
			}
			else{
				if(ranks[rank]!='T'){
					printf("Spade%c ",ranks[rank]);
				}
				else{
					printf("Spade10 ");
				}
			}
		}
	}
	printf("\n");
	
	return 0;
 } 
