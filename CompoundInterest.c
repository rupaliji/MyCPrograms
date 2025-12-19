/*C Program to find compound interest yearly*/
#include<stdio.h>
#include<math.h>
#include<process.h>
int main()
{
	/*Variable Declaration*/
	float p,r,ci,t;
	
	/*Taking Input*/
	printf("Enter the Principle amount:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	
	/*processing*/
	ci=p*pow((1+r/100),t)-p;
	
	/*Display Result*/
	printf("Compound Interest=%g",ci);
	
	/*To Pause the screen*/
	system("pause");
	return 0;
}