/*C program to find the area and perimeter of square*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*Variable Declaration*/
	int s,p,a;
	
	/*Input of numbers*/
	printf("Enter the side of square:");
	scanf("%d",&s);
	
	/*processing*/
	p=4*s;
	a=s*s;
	
	/*Display Output*/
	printf("\nPerimeter of square=%d",p);
	printf("\n\nArea of square=%d",a);
	printf("\n\n");
	
	/*To pause the output screen*/
	system("pause");
	return 0;
}