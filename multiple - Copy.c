/*Comment-> statement that are not compiled by compiler.
It is used for documentation.
It is used in source code at any place any time.
*/
#include <stdio.h>
#include <process.h>
int main()
{
	/*Variable Declaration*/
	int a;
	int b;
	int c;
	
	/*Input data from user*/
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	
	/*processing*/
	c=a*b;
	
	/*Display Result*/
	printf("\n%d*%d=%d\n\n",a,b,c);
	system ("pause");
	return 0;
}