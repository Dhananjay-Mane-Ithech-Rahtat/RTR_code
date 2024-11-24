#include<stdio.h> 

int main(void)
{
	//variable declaration and initialization 
	int a_animish = 0;
	int b_animish = 0;
	int result_animish = 0;

	//code
	printf("\n\n");
	printf("please enter a number :\n");
	scanf("%d", &a_animish);

	printf("enter another number :\n");
	scanf("%d", &b_animish);

	printf("\n\n");

	result_animish = a_animish + b_animish;
	printf("The addition of first number (%d) and second number (%d) gives : %d\n",a_animish,b_animish, result_animish);
	printf("\n");

	result_animish = a_animish - b_animish;
	printf("The second entered number (%d) substracted from the first(%d) gives : %d\n",b_animish,a_animish, result_animish);
	printf("\n");

	result_animish = b_animish - a_animish;
	printf("The first entered number (%d) substracted from the second (%d) gives : %d\n",a_animish,b_animish, result_animish);
	printf("\n");

	result_animish = a_animish * b_animish;
	printf("The first number (%d) multiplied by second number (%d) : %d\n",a_animish,b_animish, result_animish);
	printf("\n");

	result_animish = a_animish / b_animish;
	printf("The first entred number (%d) divided by the second number (%d) gives : %d\n", a_animish, b_animish, result_animish);
	printf("\n");

    result_animish = b_animish / a_animish;
	printf("The second entred number (%d) divided by the first number (%d) gives : %d\n", b_animish, a_animish, result_animish);
	printf("\n");

	result_animish = a_animish % b_animish;
	printf("The remainder of first number (%d) divided by the second number (%d) gives : %d\n", a_animish, b_animish, result_animish);
	printf("\n");

	result_animish = b_animish % a_animish;
	printf("The remainder of second number (%d) divided by the first number (%d) gives : %d\n", b_animish, a_animish, result_animish);
	printf("\n\n");

	return(0);


}