/*C program to find the area and perimeter of rectangle*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*Variable Declaration*/
	int l,b,p,a;
	
	/*Input of numbers*/
	printf("Enter the length of rectangle:");
	scanf("%d",&l);
	printf("Enter the breadth of rectangle:");
	scanf("%d",&b);
	
	/*processing*/
	p=2*(l+b);
	a=l*b;
	
	/*Display Output*/
	printf("\nPerimeter of rectangle=%d",p);
	printf("\nArea of rectangle=%d",a);
	printf("\n\n");
	
	/*To pause the output screen*/
	system("pause");
	return 0;
}