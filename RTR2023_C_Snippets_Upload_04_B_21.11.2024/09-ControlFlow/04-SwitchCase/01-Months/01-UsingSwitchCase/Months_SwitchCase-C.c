#include<stdio.h>

int main(void)
{
	//varaible declarations 
	int num_animish;

	//code
	printf("\n\n");

	printf("Enter Number of Month (1 to 12 ) : \n");
	scanf("%d", &num_animish);

	printf("\n\n");

	switch (num_animish)
	{
	case 1 :
		printf("Month Number %d in JANAURAY\n", num_animish);
		break;

	case 2 :
		printf("Month Number %d is FEBRUARY\n", num_animish);
		break;
		
	case 3:
		printf("Month Number %d is MARCH\n", num_animish);
		break;

	case 4:
		printf("Month Number %d is APRIL\n", num_animish);
		break;

	case 5:
		printf("Month Number %d is MAY\n", num_animish);
		break;

	case 6:
		printf("Month Number %d is JUNE\n", num_animish);
		break;

	case 7:
		printf("Month Number %d is JULY\n", num_animish);
		break;

	case 8:
		printf("Month Number %d is AUGUSTY\n", num_animish);
		break;

	case 9:
		printf("Month Number %d is SEPTEMBER\n", num_animish);
		break;

	case 10:
		printf("Month Number %d is OCTOBER\n", num_animish);
		break;

	case 11:
		printf("Month Number %d is NOVEMBER\n", num_animish);
		break;

	case 12:
		printf("Month Number %d is DECEMBER\n", num_animish);
		break;

	default:
		printf("Not A month !!\n");
		break;
	}
	printf("\n\n");
	printf("Switch case block complete!\n");
	return(0);
}