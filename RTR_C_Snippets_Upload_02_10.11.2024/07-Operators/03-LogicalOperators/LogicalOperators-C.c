#include<stdio.h>

int main(void)
{
	//variable declarations 
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	//code
	printf("\n\n");
	printf("enter the first integer\n");
	scanf("%d", &a);

	printf("\n\n");
	printf("enter the second integer\n");
	scanf("%d", &b);

	printf("\n\n");
	printf("enter the third integer\n");
	scanf("%d", &c);

	printf("\n\n");
	printf("1 IS FOR TRUE\n");
	printf("0 IS FOR FALSE\n");

	printf("\n\n");

	result = ((a <= b) && (b != c));
	printf("LOGICAL AND (&&): THE CONDITION IS TRUE IF AND ONLY IF BOTH CONDITIONS ARE TRUE,ELSE IT IS FALSE WHEN ONE OR TWO OF THE CONDITIONS IS FALSE\n ");
	printf("a = %d is lesser than equal to b = %d AND b = %d is not equal to c = %d     \t ANSWER:%d\n\n", a, b, b, c, result);

	result = ((b >= a) || (a == c));
	printf("LOGICAL OR (||): ANSWER IS FALSE IF AND ONLY IF BOTH OF THE CONDITIONS ARE FALSE,THE ANSWER IS TRUE IF ANY ONE OR TWO OF THE CONDITIONS ARE TRUE\n ");
	printf("a = %d is lesser than equal to b = %d AND b = %d is not equal to c = %d      \t ANSWER:%d\n\n", a, b, b, c, result);

	result = !a;
	printf("a = %d using LOGICAL NOT (!) gives the result =%d\n\n", a, result);

	result = !b;
	printf("a = %d using LOGICAL NOT (!) gives the result =%d\n\n", b, result);

	result = !c;
	printf("a = %d using LOGICAL NOT (!) gives the result =%d\n\n", c, result);

	result = (!(a <= b) && !(b != c));
	printf("Using NOT gate on (a<=b) and also on (b!=c) and afterwards AND-ing them gives the result= %d\n\n", result);
	
	result = !((b >= a) || (a == c));
	printf("Usiing NOT gate on the entire expression ((b >= a) || (a == c)) gives us the result = %d\n\n", result);

	return(0);
}