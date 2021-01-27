/*
*Name:Check the balance
*Time:2021/1/27
*Author:Peter Gu
*/

#include<stdio.h>
int main(void)
{
	int command;
	float balance = 0.0f, credit, debet;
	
	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
	for(;;){
		printf("Enter command: ");
		scanf("%d",&command);
		switch(command){
			case 0: balance = 0.0f;
				break;
			case 1: printf("Enter amount of credit: ");
				scanf("%f",&credit);
				balance += credit;
				break;
			case 2: printf("Enter amount of debit: ");
				scanf("%f",&debet);
				balance -= debet;
				break;
			case 3: printf("Current balance: $%.2f\n",balance);
				break;
			case 4: return 0;
			default: printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
				break;
		}
	}
 } 
 
 //后续可以加入浮动的利率（rand）等计算利息 
