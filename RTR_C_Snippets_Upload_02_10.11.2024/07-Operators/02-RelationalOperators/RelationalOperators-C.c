#include<stdio.h>

int main(void)
{
	//variable declarations
	int a_animish = 0;
	int b_animish = 0;
	int result_animish = 0;

	//code 
	printf("\n\n");
	printf("Enter the first number\n");
	scanf("%d", &a_animish);
	printf("Enter the second number\n");
	scanf("%d", &b_animish);
	printf("\n");

	printf("0 is for TRUE\n");
	printf("1 is for FALSE\n");
	printf("\n");

	result_animish = (a_animish > b_animish);
	printf("first number (%d) is greater than the second number (%d) i.e(a>b)    \t ANSWER : %d\n ", a_animish, b_animish, result_animish);

	result_animish = (a_animish < b_animish);
	printf("first number (%d) is smaller than the second number (%d) i.e(a<b)    \t ANSWER : %d\n ", a_animish, b_animish, result_animish);

	result_animish = (a_animish >= b_animish);
	printf("first number (%d) is greater than or equal to the second number (%d) i.e(a.b)    \t ANSWER : %d\n ", a_animish, b_animish, result_animish);

	result_animish = (a_animish <= b_animish);
	printf("first number (%d) is lesser than or equal to the second number (%d) i.e(a.b)    \t ANSWER : %d\n ", a_animish, b_animish, result_animish);

	result_animish = (a_animish == b_animish);
	printf("first number (%d) is equal to the second number (%d) i.e(a.b)    \t ANSWER : %d\n ", a_animish, b_animish, result_animish);

	result_animish = (a_animish != b_animish);
	printf("first number (%d) is not equal to the  second number (%d) i.e(a.b)    \t ANSWER : %d\n ", a_animish, b_animish, result_animish);

	printf("\n\n");

	return(0);

}