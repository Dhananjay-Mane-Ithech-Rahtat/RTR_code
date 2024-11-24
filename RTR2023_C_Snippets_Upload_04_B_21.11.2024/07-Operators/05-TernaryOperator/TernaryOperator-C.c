#include<stdio.h>

int main(void)
{
	//variable declarations 
	int a_animish, b_animish;
	int p_animish, q_animish;
	int ch_result01, ch_result_02;
	int i_result_01, i_result_02;

	//code
	printf("\n\n");

	a_animish = 07;
	b_animish = 04;
	ch_result01 = (a_animish > b_animish) ? 'A' : 'B';
	i_result_01 = (a_animish > b_animish) ? a_animish : b_animish;
	printf("Ternary Operator answer 1(a>b) : -----%c and %d \n", ch_result01, i_result_01);
	ch_result01 = (a_animish < b_animish) ? 'A' : 'B';
	i_result_01 = (a_animish < b_animish) ? a_animish : b_animish;
	printf("Ternary Operator answer 1(a<b) : -----%c and %d \n\n", ch_result01, i_result_01);
	
	p_animish = 40;
	q_animish = 40;
	ch_result_02 = (p_animish != q_animish) ? 'P' : 'Q';
	i_result_02 = (p_animish != q_animish) ? p_animish : q_animish;
	printf("Ternary Operator answer 1(p!=q) : -----%c and %d \n", ch_result_02, i_result_02);
	ch_result_02 = (p_animish == q_animish) ? 'P' : 'Q';
	i_result_02 = (p_animish == q_animish) ? p_animish : q_animish;
	printf("Ternary Operator answer 1(p==q) : -----%c and %d \n\n", ch_result_02, i_result_02);

	}