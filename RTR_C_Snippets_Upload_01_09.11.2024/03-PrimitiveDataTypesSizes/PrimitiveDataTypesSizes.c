#include<stdio.h>
int main(void)
{   
	//code
	printf("\n\n");
	printf("SIZE OF int = %zd bytes\n", sizeof(int));
	printf("SIZE OF long = %zd bytes\n", sizeof(long));
	printf("SIZE OF long long  = %zd bytes\n", sizeof(long long));
	printf("SIZE OF char = %zd bytes\n", sizeof(char));
	printf("SIZE OF short = %zd bytes\n", sizeof(short));
	printf("SIZE OF unsigned int = %zd bytes\n", sizeof(unsigned int));
	printf("SIZE OF unsigned long = %zd bytes\n", sizeof(unsigned long));
	printf("\n\n");

	return(0);
}