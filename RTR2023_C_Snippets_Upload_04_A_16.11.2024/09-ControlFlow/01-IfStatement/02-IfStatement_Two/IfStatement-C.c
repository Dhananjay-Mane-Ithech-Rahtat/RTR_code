#include<Stdio.h>

int main(void)
{
	//variable declaration
	int user_age=0;

	printf("\n\n");

	printf("What Is your age >?\n");
	scanf("%d", &user_age);

	printf("\n\n");
	
	if (user_age >= 18)
	{
		printf("Your are eligible for voting!!\n\n");

	}
	return(0);

}