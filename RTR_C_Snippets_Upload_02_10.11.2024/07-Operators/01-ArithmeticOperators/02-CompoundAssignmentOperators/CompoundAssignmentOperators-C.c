#include<Stdio.h>

int main(void)
{
	//Variable declarations 
	int a_animish = 0;
	int b_animish = 0;
	int x_animish = 0;

	//code
	printf("\n\n");
	printf("enter first number : \n");
	scanf("%d", &a_animish);

	printf("\n\n");

	printf("enter second number : \n");
	scanf("%d", &b_animish);
	printf("\n\n");

	x_animish = a_animish;
	a_animish += b_animish;
	printf("The addition of first number = (%d) and second number (%d) gives : (%d)\n", x_animish, b_animish, a_animish);
	printf("\n");

	x_animish = a_animish;
	a_animish -= b_animish;
	printf("The substraction of a+b = (%d) and second number (%d) gives : (%d)\n", x_animish, b_animish, a_animish);
	printf("\n");

	x_animish = a_animish;
	a_animish *= b_animish;
	printf("The multiplication of (a+b)-b = (%d) and second number (%d) gives : (%d)\n", x_animish, b_animish, a_animish);
	printf("\n");

	x_animish = a_animish;
	a_animish /= b_animish;
	printf("The division of ((a+b)-b)*b = (%d) and second number (%d) gives : (%d)\n", x_animish, b_animish, a_animish);
	printf("\n");

	x_animish = a_animish;
	a_animish %= b_animish;
	printf("The reaminder of division of (((a+b)-b)*b)/b = (%d) and second number (%d) gives : (%d)\n", x_animish, b_animish, a_animish);
	
	printf("\n\n");

	return(0);
}