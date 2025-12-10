/*C program to find the cube of any given number*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*variable declaration*/
	int a;
	int s;
	
	/*Input of number*/
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	/*processing*/
	s=a*a*a;
	
	/*Display Output*/
	printf("Cube of given number=%d",s);
	printf("\n\n");
	
	/*To pause output screen*/
	system("pause");
	return 0; 
}