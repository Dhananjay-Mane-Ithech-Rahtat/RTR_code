#include<stdio.h>

int main(void)
{
	//function prototypes 
	void PrintBinary(unsigned int);

	//variable declarations
	unsigned int a_animish;
	unsigned int b_animish;
	unsigned int result;

	//code
	printf("\n\n");
	printf("Enter an integer = ");
	scanf("%u", &a_animish);

	printf("\n\n");
	printf("Enter another integer = ");
	scanf("%u", &b_animish);

	printf("\n\n\n\n");
	result = a_animish ^ b_animish;
	printf("Bitwise XOR-ing of \nA = %d (Decimal) and B = %d (Decimal) gives result %d (Decimal). \n\n", a_animish, b_animish, result);

	PrintBinary(a_animish);
	PrintBinary(b_animish);
	PrintBinary(result);

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