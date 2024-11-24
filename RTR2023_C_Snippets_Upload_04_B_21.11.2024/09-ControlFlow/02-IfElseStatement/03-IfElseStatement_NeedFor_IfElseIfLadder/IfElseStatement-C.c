#include<stdio.h>

int main(void)
{
	//variable declaration
	int num_animish;

	//code
	printf("\n\n");
	
	printf("Enter a number:\n");
	scanf("%d", &num_animish);

	if (num_animish < 0)
	{
		printf("Number = %d is less than zero (NEGATIVE)\n",num_animish);
	}
	else
	{
		if ((num_animish > 0) && (num_animish <= 100))
		{
			printf("Number = %d is between 0 and 100\n",num_animish);
		}
		else
		{
			if ((num_animish > 100) && (num_animish <= 200))
			{
				printf("Number = %d is between 100 to 200\n",num_animish);
			}
			else
			{
				if ((num_animish > 200) && (num_animish <= 300))
				{
					printf("Number %d is between 200 and 300\n", num_animish);
				}
				else
				{
					if ((num_animish > 300) && (num_animish <= 400))
					{
						printf("Number %d is between 300 and 400\n", num_animish);
					}
					else
					{
						if ((num_animish > 400) && (num_animish <= 500))
						{
							printf("Number = %d is between 400 and 500\n", num_animish);
						}
						else
						{
							printf("Number  = %d exceeds 500!!!!!!\n",num_animish);
						}
					}
				}
			}
		}
	}
	printf("\n\n");
	return(0);
}