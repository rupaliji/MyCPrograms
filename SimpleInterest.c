/*C program to calculate the Simple Interest*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*Variable Declaration*/
	int p,r,t,d,si;
	
	/*Input of numbers*/
	printf("Enter the principal amount:");
	scanf("%d",&p);
	printf("Enter the rate:");
	scanf("%d",&r);
	printf("Enter the time:");
	scanf("%d",&t);

	
	/*processing*/
	d=p*r*t;
	si=d/100;
	
	/*Display Output*/
	printf("\nSimple Interest=%d",si);
	printf("\n\n");
	
	/*To pause the output screen*/
	system("pause");
	return 0;
}