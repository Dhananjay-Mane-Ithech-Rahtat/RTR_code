#include<stdio.h>

int main(void)

{
	// variable declarations
	int a = 5;
	int b = 10;
	printf("\n\n");

	printf("value of a: %d\n", a);
	printf("Value of a: %d\n", a++);
	printf("value of a: %d\n", a);
	printf("value of a: %d\n", ++a);
	printf("\n\n");

	printf("value of b: %d\n", b);
	printf("value of b: %d\n", b--);
	printf("value of b: %d\n", b);
	printf("value of b: %d\n", --b);
	printf("\n\n");

	return(0);
	
}