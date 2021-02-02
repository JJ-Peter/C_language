/*
*Name:Random footwork
*Time:2021/2/2
*Author:Peter Gu
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int x,y;

//打印数组 
void print_table(char arr[10][10])
{
	printf("\n");
	for(y=0;y<10;y++){
		for(x=0;x<10;x++){
			printf("%c ",arr[x][y]);
		}
		printf("\n");
	}
	printf("\n");
 }
 
int main(void)
{
	//this_x this_y 当前坐标
    //direction 行走方向 0,1,2,3 上右下左
    //flag 行走成功标记 flag_up_fail等为对应方向行走失败标记
	int this_x,this_y,direction,flag,flag_up_fail,flag_right_fail,flag_down_fail,flag_left_fail;
	char arr[10][10],ch;
	//初始化数组为'.'
	for(x=0;x<10;x++){
		for(y=0;y<10;y++){
			arr[x][y]='.';
			}
		}
	srand((unsigned)time(NULL));
	//寻找数组的起始位置 
	this_x=rand()%10;
	this_y=rand()%10;
	//开始随机行走 
	for(ch='A';ch<='Z';ch++){
		srand((unsigned)time(NULL)+ch);
		flag=0;
		flag_up_fail=0,flag_right_fail=0,flag_down_fail=0,flag_left_fail=0;
		while(1){
			direction=rand()%4;
			switch(direction){
				case 0://向上
					if((this_y-1)>=0 && arr[this_x][this_y-1]=='.'){
						this_y -=1;
						arr[this_x][this_y]=ch;
						flag=1;
					}
					else{
						flag_up_fail=1;
					} 
					break;
				case 1://向右
					if((this_x+1)<=9 && arr[this_x+1][this_y]=='.'){
						this_x +=1;
						arr[this_x][this_y]=ch;
						flag=1;
					}
					else{
						flag_right_fail=1;
					} 
					break;
				case 2://向下
					if((this_y+1)<=9 && arr[this_x][this_y+1]=='.'){
						this_y +=1;
						arr[this_x][this_y]=ch;
						flag=1;
					}
					else{
						flag_down_fail=1;
					} 
					break;
				case 3://向左
					if((this_x-1)>=0 && arr[this_x-1][this_y]=='.'){
						this_x -=1;
						arr[this_x][this_y]=ch;
						flag=1;
					}
					else{
						flag_left_fail=1;
					} 
					break;
			}
			if(flag_up_fail==1 && flag_right_fail==1 && flag_down_fail==1 && flag_left_fail==1){
				print_table(arr);       //四方碰壁，提前退出for循环 
			}
			if(flag==1){
				break;
			}
		}
	}
	print_table(arr);         //执行完for循环后 

	return 0;
 } 
