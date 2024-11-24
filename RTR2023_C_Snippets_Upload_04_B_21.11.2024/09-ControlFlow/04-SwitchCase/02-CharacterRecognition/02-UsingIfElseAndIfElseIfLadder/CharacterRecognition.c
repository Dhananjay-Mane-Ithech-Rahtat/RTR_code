#include<stdio.h>
#include<conio.h>

#define CHAR_ALPHABET_UPPERCASE_BEGGINING 65
#define CHAR_ALPHABET_UPPERCASE_ENDING 90

#define CHAR_ALPHABET_LOWECASE_BEGGINING 97
#define CHAR_ALPHABET_LOWECASE_ENDING 122

#define CHAR_DIGIT_BEGGINING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable declarations
	char ch_animish;
	int ch_value_animish;

	//code
	printf("\n\n");

	printf("Enter Character : \n");
	ch_animish = getch();

	printf("\n\n");

	if ((ch_animish == 'A' || ch_animish == 'a') || (ch_animish == 'E' || ch_animish == 'e') || (ch_animish == 'I' || ch_animish == 'i') || (ch_animish == 'O' || ch_animish == 'o') || (ch_animish == 'U' || ch_animish == 'u'))
	{
		printf("Character \'%c\' entered by you is a vowel character !!\n\n", ch_animish);
	}
	else
	{
		ch_value_animish = (int)ch_animish;
		if ((ch_value_animish >= CHAR_ALPHABET_UPPERCASE_BEGGINING && ch_value_animish <= CHAR_ALPHABET_LOWECASE_ENDING) || (ch_value_animish >= CHAR_ALPHABET_LOWECASE_BEGGINING && ch_value_animish <= CHAR_ALPHABET_LOWECASE_ENDING))
		{
			printf("Character \'%c\' entered by you is a consonant character !!\n\n", ch_animish);
		}
		else if (ch_value_animish >= CHAR_DIGIT_BEGGINING && ch_value_animish <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' entered by you is a DIGIT character !!\n\n", ch_animish);
		}
		else
		{
			printf("Character \'%c\' entered by you is a special character !!\n\n", ch_animish);
		}
	}
	
	return(0);

}