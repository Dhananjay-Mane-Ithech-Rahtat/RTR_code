#include<stdio.h>
int main(void)
{
	printf("\n\n");
	printf("Going to next line using \\n escape sequence\n");
	printf("Leaving\tspace\tusing\t\\t\tor\ttab\tescape\tsequence\n");
	printf("\"DOUBLE QUOTED TEXT\" using \\\" \\\" escape sequence\n");
	printf("ANIMISH turned to ANIMISH\b using the \\b sequence \n\n");

	printf("\r demonstrating carriage return using \\r escape sequence\n");
	printf("demonstrating \r carriage return using \\r escape sequence\n");
	printf("demonstrating carriage \r return using \\r escape sequence\n\n");

	printf("printing \x41 using \\xhh escape sequence\n");//\x41 is the hexadecimal code for the letter A and \xhh being its placeholder
	printf("printing \102 using \\ooo escape sequence\n");//\102 is the octal code for letter B and \oo being its placeholder
	printf("\n\n");
	return(0);
}