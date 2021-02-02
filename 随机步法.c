/*
*Name:Random footwork
*Time:2021/2/2
*Author:Peter Gu
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int x,y;

//��ӡ���� 
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
	//this_x this_y ��ǰ����
    //direction ���߷��� 0,1,2,3 ��������
    //flag ���߳ɹ���� flag_up_fail��Ϊ��Ӧ��������ʧ�ܱ��
	int this_x,this_y,direction,flag,flag_up_fail,flag_right_fail,flag_down_fail,flag_left_fail;
	char arr[10][10],ch;
	//��ʼ������Ϊ'.'
	for(x=0;x<10;x++){
		for(y=0;y<10;y++){
			arr[x][y]='.';
			}
		}
	srand((unsigned)time(NULL));
	//Ѱ���������ʼλ�� 
	this_x=rand()%10;
	this_y=rand()%10;
	//��ʼ������� 
	for(ch='A';ch<='Z';ch++){
		srand((unsigned)time(NULL)+ch);
		flag=0;
		flag_up_fail=0,flag_right_fail=0,flag_down_fail=0,flag_left_fail=0;
		while(1){
			direction=rand()%4;
			switch(direction){
				case 0://����
					if((this_y-1)>=0 && arr[this_x][this_y-1]=='.'){
						this_y -=1;
						arr[this_x][this_y]=ch;
						flag=1;
					}
					else{
						flag_up_fail=1;
					} 
					break;
				case 1://����
					if((this_x+1)<=9 && arr[this_x+1][this_y]=='.'){
						this_x +=1;
						arr[this_x][this_y]=ch;
						flag=1;
					}
					else{
						flag_right_fail=1;
					} 
					break;
				case 2://����
					if((this_y+1)<=9 && arr[this_x][this_y+1]=='.'){
						this_y +=1;
						arr[this_x][this_y]=ch;
						flag=1;
					}
					else{
						flag_down_fail=1;
					} 
					break;
				case 3://����
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
				print_table(arr);       //�ķ����ڣ���ǰ�˳�forѭ�� 
			}
			if(flag==1){
				break;
			}
		}
	}
	print_table(arr);         //ִ����forѭ���� 

	return 0;
 } 
