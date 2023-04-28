/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 07 PART 3 / BASIC STAGE
*TOPIC: FORMATING DATA OUTPUT, AND USING INPUT; ARITMETIC OPERATORS IN C, TYPE *CONVERSIONS.
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    int     a;
    int     b;    
    
    float c = (float)a / b; // NOTE: using the typecast (float) means an explicit conversion;
    float d = a / b; // NOTE: without the typecast (float) the result is a implicit conversion;

    printf("explicit conversion: %f \n", c);
    printf("implicit conversion: %f \n", d);

    return (0);
}