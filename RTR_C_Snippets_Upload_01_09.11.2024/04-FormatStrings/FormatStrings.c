#include<stdio.h>

int main(void)
{
	//code
	printf("\n\n");
	printf("***************************************************************************************");
	printf("\n\n");

	printf("Hello world!!\n\n");

	int a = 13;
	printf("Integer value of a is %d\n", a);
	printf("integer Octal value of a is %o\n", a);
	printf("integer Hexadecimal value of a is %x\t(Hexadecimals in lower case)\n", a);
	printf("integer Hexadecimal value of a is %X\t(Hexadecimals in lower case)\n\n", a);

	char ch = 'A';
	printf("Character inside ch is %c\n", ch);
	char str[] = "Hello my name is Animish";
	printf("char string str = %s\n\n", str);

	long l = 13072007L;
	printf("Long l = %ld\n\n", l);

	unsigned int ui = 7;
	printf("unsigned int ui = %u\n\n", ui);

	float fl = 1322.12345f;
	printf("Floaating point number fl with %%f = %f\n", fl);
	printf("Floating point number fl with %%4.2f = %4.2f\n",fl);
	printf("Floating point number fl with %%6.4f = %6.4f\n", fl);
	printf("Floating point number fl with %%3.2f = %3.2f\n\n", fl);

	double pi = 3.14159265358979323846;
	printf("Double precision floating point number without exponential = %g\n", pi);
	printf("Double precision floating point number with lower case exponential = %e\n", pi);
	printf("Double precision floating point number with Upper case exponential = %E\n", pi);
	printf("Double hexadecimal value of pi is = %a\t(hexadecimal numbers in lower case)\n", pi);
	printf("Double hexadecimal value of pi is = %A\t(hexadecimal numbers in upper case)\n\n", pi);

	printf("***************************************************************************************");
	printf("\n\n");
	return(0);
}
