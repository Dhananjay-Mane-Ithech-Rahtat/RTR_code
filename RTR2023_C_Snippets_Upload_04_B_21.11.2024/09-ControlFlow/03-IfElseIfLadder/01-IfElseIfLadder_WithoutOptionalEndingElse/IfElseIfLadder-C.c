#include<stdio.h>

int main(void)
{
	//varaible declarations
	int animish;

	//code
	printf("\n\n");
	printf("Please enter a number : \n");
	scanf("%d", &animish);

	if (animish < 0)

		printf("Number = %d is smaller than zero (NEGATIVE)\n", animish);

	else if ((animish > 0) && (animish <= 100))

		printf("Number = %d is between 1 and 100\n", animish);

	else if ((animish > 100) && (animish <= 200))

		printf("Number = %d is between 100 and 200\n", animish);

	else if ((animish > 200) && (animish <= 300))

		printf("Number = %d is between 200 and 300\n", animish);

	else if ((animish > 300) && (animish <= 400))

		printf("Number = %d is between 300 and 400\n", animish);

	else if ((animish > 400) && (animish <= 500))

		printf("Number = %d is between 400 and 500\n", animish);

	else if (animish > 500)
		printf("Number = %d is greater than 500!!!!!\n", animish);

	return(0);
}