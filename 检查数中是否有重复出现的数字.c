/*
*Name:Check the repeated digit
*Time:2021/1/31
*AUthor:Peter Gu
*/

#include<stdio.h>
#include<stdbool.h>
#define N 10

int split(int a[],int low, int high)
{
	int part_element=a[low];
	for(;;){
		while(low<high&&part_element<=a[high])
		high--;
		if(low>=high) break;
		a[low++]=a[high];
		while(low<high&&a[low]<=part_element)
			low++;
		if(low>=high) break;
		a[high--]=a[low];
	} 
	a[high]=part_element;
	return high;
}

void quicksort(int a[],int low,int high)
{
	int middle;
	if(low>=high) 
		return;
	middle = split(a,low,high);
	quicksort(a,low,middle-1);
	quicksort(a,middle+1,high);
}

int main(void)
{
	bool digit_seen[10]={false},digit_print[10]={false};
	int a[N]={0},digit,i,t=0;
	long n;
	 
	printf("Enter a number: ");
	scanf("%ld",&n);
	
	while(n>0){
		digit=n%10;
		if(digit_seen[digit]){
			break;
		}
		digit_seen[digit]=true;
		n/=10;
	}
		
	if(n>0){
		printf("Repeated digit: ");
		while(n>0){
			digit=n%10;
			if(digit_seen[digit]){
				digit_print[digit]=true;	
			}
			digit_seen[digit]=true;
			n/=10;
		}
		for(i=0;i<10;i++){
			if(digit_print[i]){
				a[t++]=i;
			}
		}
		quicksort(a,0,t-1);
		for(i=0;i<t-1;i++){
			printf("%d,",a[i]);
		}
		printf("%d.\n",a[t-1]);
	}
	else{
			printf("No repeated digit\n");
			
		}
	
	return 0;
 } 
