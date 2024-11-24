#include<stdio.h>
#include<conio.h>// for getch

int main(void)
{
    //variable decarations
    int a_animish, b_animish;
    int result_animish;

    char option_animish, option_division_animish;

    //code 
    printf("\n\n");

    printf("Enter Value for 'A' : ");
    scanf("%d", &a_animish);

    printf("Enter Value for 'B' : ");
    scanf("%d", &b_animish);

    printf("Enter Option In Character : \n\n");
    printf("'A' OR 'a' FOR ADDITION : \n");
    printf("'S' OR 's' FOR SUBSTRACTION : \n");
    printf("'M' OR 'm' FOR MULTIPLICATION : \n");
    printf("'D' OR 'd' FOR DIVISION : \n\n\n\n");

    printf("Enter Option : ");
    option_animish = getch();

    printf("\n\n");

    switch (option_animish)
    {
    case 'A':
    case'a':
        result_animish = a_animish + b_animish;
        printf("Addition of A = %d and B = %d gives the result = %d\n\n", a_animish, b_animish, result_animish);
        break;

    case 'S':
    case 's':
        if (a_animish >= b_animish)
        {
            result_animish = a_animish - b_animish;
            printf("Substraction of B = %d from A = %d gives the result = %d\n\n", b_animish, a_animish, result_animish);
        }
        else
        {
            result_animish = b_animish - a_animish;
            printf("Substraction of A = %d from B = %d gives the result = %d\n\n", a_animish, b_animish, result_animish);
        }
        break;

    case 'M':
    case 'm':
        result_animish = a_animish * b_animish;
        printf("Multiplication of A = %d and B = %d gives the result = %d\n\n", a_animish, b_animish, result_animish);
        break;

    case 'D':
    case'd':
        printf("Enter Option in character :\n");
        printf("Enter 'Q' or 'q' or '/' for Quotient Upon Division : \n");
        printf("Enter 'R' or 'r' or '%' for Quotient Upon Division : \n");

        printf("Enter Option : ");
        option_division_animish = getch();

        printf("\n\n");

        switch (option_division_animish)
        {
        case 'Q':
        case 'q':
        case '/':

            if (a_animish >= b_animish)
            {
                result_animish = a_animish / b_animish;
                printf("Division of A = %d by B = %d give the result = %d\n\n", a_animish, b_animish, result_animish);
            }
            else
            {
                result_animish = b_animish / a_animish;
                printf("Division of B = %d by A = %d give the result = %d\n\n", b_animish, a_animish, result_animish);
            }
            break;
        case 'R':
        case 'r':
        case'%':

            if (a_animish >= b_animish)
            {
                result_animish = a_animish % b_animish;
                printf("Remainder of division of A = %d by B = %d give the result = %d\n\n", a_animish, b_animish, result_animish);
            }
            else
            {
                result_animish = b_animish % a_animish;
                printf("Division of B = %d by A = %d give the result = %d\n\n", b_animish, a_animish, result_animish);
            }
            break;
        default :
            printf("Invaid character %c Entered for division!!!!!!!!\n\n ", option_division_animish);
            break;
        }
        break;
    default:
        printf("Invalid character %c entered !! TRY AGAIN \n\n", option_animish);
        break;
    }
    printf("Switch case block complete......!!!\n\n\n\n");

    return(0);
}