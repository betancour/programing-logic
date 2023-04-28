/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 14 PASSING PARAMETERS BY VALUE IN C;
*TOPIC: CALCULATE PERCENT
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

float discount (float total, float tax)
{
    tax = 1 - tax/100;

    return total * tax;
}

int     main(void)
{
    setlocale(LC_ALL, "en-US");
    
    float   total;

    total = 8000;

    printf("Total with discount of 10%% = to $: %.2f\n",discount(total,10));
    printf("Total with discount of 5%% = to $: %.2f\n",discount(total,5));

    return (0);
}