#include<stdio.h>

int main(void)
{
	//function declarations 
	void PrintBinary(unsigned int decimal_number);

	//varaible declarations 
	unsigned int a_animish;
	unsigned int n;
	unsigned int result_animish;

	//code
	
	printf("\n\n");
	printf("Enter a number:\n");
	scanf("%u", &a_animish);

	printf("\n\n");
	printf("Number A = %d should be left shifted by ?\n", a_animish);
	scanf("%u", &n);

	printf("\n\n\n\n");
	result_animish = a_animish << n;
	printf("The Number A = %d left shifted by %d bits gives the result = %d\n\n", a_animish, n, result_animish);
	PrintBinary(a_animish);
	PrintBinary(result_animish);

	return(0);

}

void PrintBinary(unsigned int decimal_number)
{
	//variable declarations 
	unsigned int quotient, remainder;
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code
	for (i = 0; i < 8; i++)
	{
		binary_array[i] = 0;
	}

	{

		printf("The binary form of the decimal integer %d is\t = \t", decimal_number);
		num = decimal_number;
		i = 7;
		while (num != 0)
		{
			quotient = num / 2;
			remainder = num % 2;
			binary_array[i] = remainder;
			num = quotient;
			i--;

		}
		for (i = 0; i < 8; i++)
			printf("%u", binary_array[i]);

		printf("\n\n");
	}
}