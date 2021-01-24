/*
*Name:Display date of the week in legal format and day
*Time:2021/1/24
*Author:Peter Gu
*/

#include<stdio.h>

int main(void)
{
	int day, month, year;
	while(1){
		printf("Enter date (year/month/day) after 1990/1/1:");
		scanf("%d/%d/%d",&year,&month,&day);
		
		printf("\tDated this %d",day);
		switch(day){
			case 1: case 21: case 31:
				printf("st");
				break;
			case 2: case 22:
				printf("nd");
				break;
			case 3: case 23:
				printf("rd");
				break;
			default: printf("th");
				break;
		}
		printf(" day of ");
		
		int count,allday,l;
		int i;
		if(year==1900){
			count=0;
		}
		else{
			for(i=1900;i<year;i++){
				if(i%4==0&&i%100!=0){
					count=count+1;
				}
				if(i%400==0){
					count=count+1;
				}
			}
		}
		
		switch(month){
			case 1: printf("January");
				allday=count*366+(year-1900-count)*365+day;
				break;
			case 2: printf("February");
				allday=count*366+(year-1900-count)*365+31+day;
				break;
			case 3: printf("March");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+day;
				}
				break;
			case 4: printf("April");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+day;
				}
				break;
			case 5: printf("May");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+day;
				}
				break;	
			case 6: printf("June");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+31+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+31+day;
				}
				break;
			case 7: printf("July");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+31+30+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+31+30+day;
				} 
				break;
			case 8: printf("Augest");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+31+30+31+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+31+30+31+day;
				}
				break;
			case 9: printf("September");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+31+30+31+31+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+31+30+31+31+day;
				}
				break;
			case 10: printf("October");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+31+30+31+31+30+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+31+30+31+31+30+day;
				}
				break;
			case 11: printf("November");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+31+30+31+31+30+31+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+31+30+31+31+30+31+day;
				}
				break;
			case 12: printf("December");
				if(year%400==0||year%4==0&year%100!=0){
					allday=count*366+(year-1900-count)*365+31+29+31+30+31+30+31+31+30+31+30+day;
				}
				else{
					allday=count*366+(year-1900-count)*365+31+28+31+30+31+30+31+31+30+31+30+day;		
				}
				break; 
		}
	
		printf(", %d.\n\t\tIt's ",year);
	
		l=(allday)%7;
		switch(l){
			case 0: printf("Sunday");
				break;
			case 1: printf("Monday");
				break;
			case 2: printf("Tuesday");
				break;
			case 3: printf("Wednesday");
				break;
			case 4: printf("Thursday");
				break;
			case 5: printf("Friday");
				break;
			case 6: printf("Saturday");
				break;
		}
		printf(".\n");
	
		printf("\t\t\tEnter 0, it will log out;Or enter 1: ");
		int m;
		scanf("%d",&m);
		if(m==0){
			break;
		} 
		else{
			printf("\n");
		}
	}
	return 0;
}
