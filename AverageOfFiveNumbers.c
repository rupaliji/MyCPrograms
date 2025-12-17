/*C program to find the average of five numbers*/
#include<stdio.h>
#include<process.h>
int main()
{	
	/*Vaiable Declaration*/
	int a,b,c,d,e,s;
	float avg;
	
	/*Input of different numbers*/
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of e:");
	scanf("%d",&e);
	
	/*processing*/
	s=a+b+c+d+e;
	avg=s/5.0;
	
	/*Display result*/
	printf("Average of five number=%g",avg);
	printf("\n\n");
	
	/*To pause Output screen*/
	system("pause");
	return 0;
}