#include<stdio.h>

int main(void)
{
	//variable declarations
	int num_animish;

	//code
	printf("\n\n");

	printf("Enter the number of month(1 to 12) : \n");
	scanf("%d", &num_animish);

	printf("\n\n");

	if (num_animish == 1)
		printf("Month Number %d in JANAURAY\n", num_animish);
	else if (num_animish == 2)
		printf("Month Number %d is FEBRUARY\n", num_animish);
	else if (num_animish == 3)
		printf("Month Number %d is MARCH\n", num_animish);
	else if (num_animish == 4)
		printf("Month Number %d is APRIL\n", num_animish);
	else if (num_animish == 5)
		printf("Month Number %d is MAY\n", num_animish);
	else if (num_animish == 6)
		printf("Month Number %d is JUNE\n", num_animish);
	else if (num_animish == 7)
		printf("Month Number %d is JULY\n", num_animish);
	else if (num_animish == 8)
		printf("Month Number %d is AUGUSTY\n", num_animish);
	else if (num_animish == 9)
		printf("Month Number %d is SEPTEMBER\n", num_animish);
	else if (num_animish == 10)
		printf("Month Number %d is OCTOBER\n", num_animish);
	else if (num_animish == 11)
		printf("Month Number %d is NOVEMBER\n", num_animish);
	else if (num_animish == 12)
		printf("Month Number %d is DECEMBER\n", num_animish);
	else
		printf("Invalid month\n");

	printf("\n\n");
	printf("IF-ELSEIF-ELSE loop complete\n\n");

}