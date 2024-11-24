#include<Stdio.h>
int main(void)
{
//variable declarations

	int a_animish, b_animish, q_animish;

	//code

	a_animish = 9;
	b_animish = 30;
	q_animish = 30;

	printf("\n\n");

	if (a_animish < b_animish)
	{
		printf("B is greater than A\n\n");
	}
	
	if (b_animish != q_animish)
	{
		printf("B is not equal to Q\n\n");
	}

	printf("Both the comparisons are done\n\n");

	return(0);
	
}