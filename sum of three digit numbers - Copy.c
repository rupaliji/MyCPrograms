/*c program to find the sum of digits of three digit number*/
#include<stdio.h>
#include<process.h>
int main()
{
	/*variable declaration*/
	int number,updigit,tpdigit,hpdigit,sum;
	/*three digit number from user*/
	printf("Please enter three digit number:");
	scanf("%d",&number);
	/*Extract three digits from number*/
	/*Extract unit place digit*/
	updigit = number%10;
	/*Extract tens place digit from number*/
	tpdigit = number/10%10;
	/*Extract hundred place digit from number*/
	hpdigit = number/100%10;
	/*Find the sum of digit*/
	sum=updigit+tpdigit+hpdigit;
	
	/*Display result*/
	printf("You have entered %d. Its unit place digit is %d, tens place digit is %d and hundred place digit is %d.\n The sum of all three digit is %d.", number, updigit, tpdigit, hpdigit,sum);
	printf("\n");
	system("pause");
	return 0;
	
	
	
}