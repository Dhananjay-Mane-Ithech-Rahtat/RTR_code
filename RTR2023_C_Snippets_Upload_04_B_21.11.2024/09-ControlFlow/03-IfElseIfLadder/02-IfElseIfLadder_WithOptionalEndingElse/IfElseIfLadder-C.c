#include<stdio.h>

int main(void)
{
	//varaible declarations 
	int animish1;

	//code
	printf("\n\n");

	printf("Enter a number : \n\n");
	scanf("%d", &animish1);

	if (animish1 < 0)
		printf("Number = %d is smaller than zero (NEGATIVE)\n", animish1);

	else if ((animish1 > 0) && (animish1 <= 100))
		printf("Number = %d is between 0 and 100\n", animish1);

	else if ((animish1 > 100) && (animish1 <= 200))
		printf("Number = %d is between 100 and 200 \n", animish1);

	else if ((animish1 > 200) && (animish1 <= 300))
		printf("Number = %d is between 200 and 300\n", animish1);

	else if ((animish1 > 300) && (animish1 <= 400))
		printf("Number = %d is between 300 and 400\n", animish1);

	else if ((animish1 > 400) && (animish1 <= 500))
		printf("Number = %d is between 400 and 500\n", animish1);

	else if (animish1 > 500)
		printf("Number = %d exceeds 500 \n", animish1);

	else
		printf("Please Enter a Valid input\n");

	return(0);
}