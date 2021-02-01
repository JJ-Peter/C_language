/*
*Name:Store and analyse the gredes
*Time:2021/2/1
*Author:Peter Gu
*/ 

#include<stdio.h>
#define NUM_STUDENTS 5
#define NUM_COURSES 5

int main(void)
{
	int grades[NUM_STUDENTS][NUM_COURSES];
	int student,course,total,average,min,max;
	
	for(student=0;student<NUM_STUDENTS;student++){
		printf("Enter grades for student %d: ",student+1);
		for(course=0;course<NUM_COURSES;course++){
			scanf("%d",&grades[student][course]);
		}
	}
	
	printf("\nstudent   total   average\n");
	for(student=0;student<NUM_STUDENTS;student++){
		total=0;
		for(course=0;course<NUM_COURSES;course++){
			total=total+grades[student][course];
		}
		printf("%4d      %4d    %5d\n",student+1,total,total/NUM_COURSES);
	}
	
	printf("\ncourse   average   max   min\n");
	for(course=0;course<NUM_COURSES;course++){
		total=0;
		min=150;
		max=0;
		for(student=0;student<NUM_COURSES;student++){
			total=total+grades[student][course];
			max=grades[student][course]>max?grades[student][course]:max;
			min=grades[student][course]<min?grades[student][course]:min;
		}
		printf("%4d     %5d     %3d   %3d\n",course+1,total/NUM_STUDENTS,max,min);
	}
	
	return 0;
}
