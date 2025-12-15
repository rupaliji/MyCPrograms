/*C program to print the table of given number in reverse order*/
#include<stdio.h>
#include<process.h>
int main()
{	
	/*Variable Declaration*/
	int n;
	int t;
	
	/*Input Of Number*/
	printf("Enter number to print table:");
	scanf("%d",&n);
	t=n*10;
	printf("%d",t);
	t=n*9;
	printf("\n%d",t);
	t=n*8;
	printf("\n%d",t);
	t=n*7;
	printf("\n%d",t);
	t=n*6;
	printf("\n%d",t);
	t=n*5;
	printf("\n%d",t);
	t=n*4;
	printf("\n%d",t);
	t=n*3;
	printf("\n%d",t);
	t=n*2;
	printf("\n%d",t);
	t=n*1;
	printf("\n%d\n",t);
	
	/*To pause output screen*/
	system("pause");
	return 0;
} 