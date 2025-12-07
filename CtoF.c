/*C program to convert degree celcius tempreature to Fahrenheit*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*Variable Declaration*/
	/*float c;
	float f;
	float k;*/
	float c,f,k; /*Multiple Declaration*/
	
	/*Input temperature from user*/
	printf("Enter temperature in degree Celcius:");
	scanf("%f",&c);
	
	
	/*Convert cel to fahrenheit*/
	/*Processing*/
	f=c*9/5.0+32;
	k=c+273.15;
	
	
	/* display result*/
	printf("\n====================");
	printf("\n%.2f C = %.2f F",c,f);
	printf("\n%.2f C = %.2f K",c,k);
	printf("\n====================\n\n\n");
	/*To pause output screen*/
	system("pause");
	return 0;
}
