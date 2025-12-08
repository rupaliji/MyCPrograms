/*C program to find the square of any given number*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*Variable Declaration*/
	int a;
	int s;
	
	/*Input of number*/
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	/*processing*/
	s=a*a;
	
	/*Display Output*/
	printf("Square of given number=%d",s);
	printf("\n\n");
	
	/*To pause the output screen*/
	system("pause");
	return 0;
}