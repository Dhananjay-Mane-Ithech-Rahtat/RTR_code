#include<stdio.h>
#include<conio.h>

int main(void)
{
	//vraible declarations
	int a_animish, b_animish;
	int result_animish;

	char option_animish, division_animish;

	//code
	printf("\n\n");

	printf("Enter value for A : \n");
	scanf("%d", &a_animish);

	printf("Enter value for B :  \n");
	scanf("%d", &b_animish);

	printf("Enter Option In Chararcter : \n\n");
	printf("Enter 'A' OR 'a' for ADDITION : \n");
	printf("Enter 'S' OR 's' for SUBSTRACTION : \n");
	printf("Enter 'M' OR 'm' for MULTIPLICATION : \n");
	printf("Enter 'D' OR 'd' for DIVISION : \n\n");

	printf("Enter Option : \n");
	option_animish = getch();

	printf("\n\n");

	if (option_animish == 'a' || option_animish == 'A')
	{
		result_animish = a_animish + b_animish;
		printf("Addition of A = %d AND B = %d give the result = %d\n\n", a_animish, b_animish, result_animish);
	}
	else if (option_animish == 's' || option_animish == 'S')
	{
		if (a_animish > b_animish)
		{
			result_animish = a_animish - b_animish;
			printf("Substracting B = %d from A = %d gives the result = %d \n\n", b_animish, a_animish, result_animish);
		}
		else
		{
			result_animish = b_animish - a_animish;
			printf("Substracting A = %d from B = %d gives the result = %d \n\n", a_animish, b_animish, result_animish);
		}
	}
	else if (option_animish == 'M' || option_animish == 'm')
	{
		result_animish = a_animish * b_animish;
		printf("Multiplication of A = %d and B = %d gives the result = %d \n\n", a_animish, b_animish, result_animish);
	}
	else if (option_animish == 'd' || option_animish == 'D')
	{
		printf("Enter Option in character :\n");
		printf("Enter 'Q' or 'q' or '/' for Quotient Upon Division : \n");
		printf("Enter 'R' or 'r' or '%' for Quotient Upon Division : \n");

		printf("Enter Option : ");
		division_animish = getch();

		printf("\n\n");

		if (division_animish == 'd' || division_animish == 'D' || division_animish == '/')
		{
			if (a_animish > b_animish)
			{
				result_animish = a_animish / b_animish;
				printf("Division of A = %d by B = %d give the result = %d\n\n", a_animish, b_animish, result_animish);
			}
			else
			{
				result_animish = b_animish / a_animish;
				printf("Division of B = %d by A = %d give the result = %d\n\n", b_animish, a_animish, result_animish);
			}
		}
		else if (division_animish == 'R' || division_animish == 'r' || division_animish == '%')
		{
			if (a_animish >= b_animish)
			{
				result_animish = a_animish % b_animish;
				printf("Remainder of division of A = %d by B = %d give the result = %d\n\n", a_animish, b_animish, result_animish);
			}
			else
			{
				result_animish = b_animish % a_animish;
				printf("Division of B = %d by A = %d give the result = %d\n\n", b_animish, a_animish, result_animish);
			}
		}
		else
			printf("Invalid Character = %c Entered for division try again\n", division_animish);
	}
	else
		printf("Invalid Character = %c Entered !! try again\n", option_animish);

	printf("IF-ELSEIF-ELSE ladder complete\n\n");

	return(0);

}