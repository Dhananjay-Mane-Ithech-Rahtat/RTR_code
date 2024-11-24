#include<stdio.h>

int main(void)
{
	//varaible declarations
	unsigned int age_animish;

	//code
	printf("\n\n");
	printf("Please Enter Your AGE:\n");
	scanf("%u", &age_animish);
	if (age_animish >= 18)
	{
		printf("Entering if block.........\n");
		printf("You are eligible for voting !!!\n");
	}
	else
	{
		printf("Entering else block.........\n");
		printf("You are NOT eligible for voting\n");
		printf("Years left to be eligible : %u\n", (18 - age_animish));
	}
	printf("Bye !!!\n");
	printf("\n\n");
	return(0);

}