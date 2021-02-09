/*
*Name:Mine sweeping
*Time:2021/2/8
*Author:Peter Gu
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11

void menu();
void game();
void init(char arr[ROWS][COLS],int rows,int cols,char ch);
void setmine(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row,int col,int num_mine);
void findmine(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row,int col,int num_mine);
void printboard(char arr[ROWS][COLS],int row,int col);

int main(void)
{
	srand((unsigned int)time(NULL));
	int input;
	
	do{
		menu();
		scanf("%d",&input);
		switch(input){
			case 1:
				game();
				break;
			case 0:
				printf("Exit game\n");
				break;
			default:
				printf("Input error, please input again.\n");
		}
	}while(input);
	
	return 0;		
 } 

//菜单函数 
void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
}

//初始化函数 
void init(char arr[ROWS][COLS],int rows,int cols,char ch)
{
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			arr[i][j]=ch;
		}
	}
}

//游戏主体 
void game()
{
	char arr1[ROWS][COLS];       //记录雷的地方 
	char arr2[ROWS][COLS];		//混淆视线 
	init(arr1,ROWS,COLS,'0');
	init(arr2,ROWS,COLS,'*');
	int num_mine=0;
	setmine(arr1,arr2,ROW,COL,num_mine);
	findmine(arr1,arr2,ROW,COL,num_mine);
	return;
}

//打印函数 
void printboard(char arr[ROWS][COLS],int row,int col)
{
	int i=1;
	for(i=0;i<=col;i++){
		printf("%d ",i);
	}
	printf("\n");
	
	for(i=1;i<=row;i++){
		printf("%d ",i);
		int j=1;
		for(j=1;j<=col;j++){
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}

//放雷 
void setmine(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row,int col,int num_mine)
{
	int x,y,i;
	printf("How many mines you want to choose, please input (mine number is from 1 to 80): ");
	scanf("%d",&num_mine);
	for(i=0;i<num_mine;i++){
		x=rand()%row+1;
		y=rand()%col+1;
		arr1[x][y]='1';
	}
	printboard(arr2,ROW,COL); 
}

//找雷 
void findmine(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row,int col,int num_mine)
{
	int x,y;
	int i=0;
	while(i<ROW*(COL-num_mine)){
		printf("Please input you coordinate: ");
		scanf("%d%d",&x,&y);
		if(arr1[x][y]=='0'){
			int i=0,j=0;
			char ch='0';
			for(i=x-1;i<=x+1;i++){
				for(j=y-1;j<=y+1;j++){
					if(arr1[x][y]=='1'){
						ch+=1;
					}
				}
			}
			arr2[x][y]=ch;
			printboard(arr2,ROW,COL);
		}
		else{
			printf("You die\n");
			printboard(arr1,ROW,COL);
			return; 
		}
		i++;
	}
	printf("You win\n"); 
}
