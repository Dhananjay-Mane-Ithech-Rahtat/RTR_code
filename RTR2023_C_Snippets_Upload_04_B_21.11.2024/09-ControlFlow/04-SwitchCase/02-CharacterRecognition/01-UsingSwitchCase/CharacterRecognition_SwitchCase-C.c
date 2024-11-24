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

	switch(ch_animish)
	{
		case 'A':
		case 'a':

		case 'E':
		case 'e':

		case 'I':
		case 'i':

		case 'O':
		case 'o':

		case 'U':
		case 'u':
			printf("Character \'%c\' entered by you is a vowel character !!\n\n", ch_animish);
			break;

		default:
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
				printf("Character \'%c\' entered by you is a special character !!\n\n",ch_animish);
			}
	}
	printf("Switch Case complete!!\n\n");

	return(0);
}