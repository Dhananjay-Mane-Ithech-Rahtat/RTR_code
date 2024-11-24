#include<stdio.h>

#define NAME "Animish Deo"

#define PI 3.1415926535897932

//unnamed enums
enum
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
};

enum
{
	JANAURY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER,
};

//named enums
enum numbers
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE=5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum boolean
{
	TRUE=0,
	FALSE=1,
};

int main(void)
{
	//local constant declarations
	const double epsilion = 0.0000001;

	//code
	printf("\n\n");
	printf("The value of local constant epsilion is %lf\n", epsilion);
	printf("\n\n");

	printf("SUNDAY is day number = %d\n", SUNDAY);
	printf("MONDAY is day number = %d\n", MONDAY);
	printf("TUESDAY is day number = %d\n",TUESDAY);
	printf("WEDNESDAY is day number = %d\n",WEDNESDAY);
	printf("THURSDAY is day number = %d\n", THURSDAY);
	printf("FRIDAY is day number = %d\n", FRIDAY);
	printf("SATURDAY is day number = %d\n", SATURDAY);
	printf("\n\n");

	printf("One is enum number = %d\n", ONE);
	printf("Two is enum number = %d\n", TWO);
	printf("Three is enum number = %d\n", THREE);
	printf("Four is enum number = %d\n", FOUR);
	printf("Five is enum number = %d\n", FIVE);
	printf("Six is enum number = %d\n", SIX);
	printf("Seven is enum number = %d\n", SEVEN);
	printf("Eight is enum number = %d\n", EIGHT);
	printf("Nine is enum number = %d\n", NINE);
	printf("Ten is enum number = %D\n", TEN);
	printf("\n\n");

	printf("Janauary is month number = %d\n", JANAURY);
	printf("February is month number = %d\n", FEBRUARY);
	printf("March is month number = %d\n", MARCH);
	printf("April is month number = %d\n", APRIL);
	printf("May is month number = %d\n", MAY);
	printf("June is month number = %d\n", JUNE);
	printf("July is month number = %d\n", JULY);
	printf("August is month number = %d\n", AUGUST);
	printf("September is month number = %d\n", SEPTEMBER);
	printf("October is month number = % d\n", OCTOBER);
	printf("November is month number = %d\n", NOVEMBER);
	printf("December is month number = %d\n", DECEMBER);
	printf("\n\n");

	printf("The value of true is = %d\n", TRUE);
	printf("The valye of false is = %d\n", FALSE);
	printf("\n\n");

	printf("PI macro value = %.101f\n\n", PI);
	printf("Radius of circle with raduis 2 units = %f\n\n", PI * 2.0f * 2.0f);//pi r square

	printf("\n\n");

	printf(NAME);
	printf("\n\n");

	printf("My Name is -- %s\n", NAME);
	printf("\n\n");
}