#include<stdio.h>

int main(void)
{
	//variable declarations
	int a_animish, b_nilesh, c_deo;

	//code
	a_animish = 9;
	b_nilesh = 30;
	c_deo = 30;

	printf("\n\n");
	//first if-else pair
	if (a_animish < b_nilesh)
	{
		printf("Entering the first if-block......\n");
		printf("A is smaller than B\n");

	}
	else
	{
		printf("Entering the first else-block.......\n");
		printf("A is NOT less than B\n");
	}
	printf("First If-Else block done!!\n\n\n\n");

	//second if-else pair
	if (b_nilesh != c_deo)
	{
		printf("Entering the second if-block.......\n");
		printf("B is NOT equal to C\n");
	}
	else
	{
		printf("Entering the second else-block.......\n");
		printf("B is EQUAL to C\n");
	}
	printf("Second If-Else block done!!\n\n");
	return(0);

}