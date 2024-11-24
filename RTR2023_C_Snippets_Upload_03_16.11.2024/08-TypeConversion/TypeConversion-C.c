#include<Stdio.h>

int main(void)
{
	//varaible declarations 
	int i, j;
	char ch_01, ch_02;

	int a, result_int;
	float f, result_float;

	int i_explicit;
	float f_explicit;

	//code
	printf("\n\n");

	//IMPLICIT BETWEEN INT AND CHAR
	i = 23;
	ch_01 = i;
	printf("I = %d\n", i);
	printf("Character 1 after ( ch_01 = i ) = %c\n\n", ch_01);

	ch_02 = 'B';
	j = ch_02;
	printf("Character 2 = %c\n", ch_02);
	printf("J after (j = ch_02 ) = %d\n\n", j);

	//IMPLICIT BETWEEN INT AND FLOAT 
	a = 23;
	f = 7.8f;
	result_float = (a + f);
	printf("SUM OF Integer (%d) and float (%f) gives float (%f)\n\n", a, f, result_float);

	result_int = a + f;
	printf("SUM OF Integer (%d) and float (%f) gives integer (%d)\n\n", a, f, result_int);

	//EXPLICIT TYPECASTING USING TYPECASTOPERATOR 
	f_explicit = 3.141516171819f;
    i_explicit = (int)f_explicit;
	printf("floating point number which will be typecassted is : (%f)\n", f_explicit);
	printf("floating point number (%f) typecasated into intger is : (%d)\n",f_explicit, i_explicit);
	return(0);

}