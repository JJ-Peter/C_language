/*
*Name:Print a table of squares
*Time:2021/1/28
*Author:Peter Gu
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	char ch;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	ch = getchar();               	// dispose of new-line character following number of entries 
	for (i = 1; i <= n; i++) {
    	printf("%10d%10d\n", i, i*i);
    	if (i%4 == 0) {
    		printf("Press Enter to continue...");
    		ch = getchar();
    	}
	}

	return 0;
}
