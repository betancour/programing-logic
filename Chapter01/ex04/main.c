/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 05 / BASIC STAGE
*TOPIC: PRINT DIFFERENT DATA TYPES
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/


#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "en-US");

    bool    b;
    b = false;

    printf("%d \n", b);

    char    c;
    c  = 65;

    printf("%c \n", c);

    int     i;
    i = 565845785;

    printf("%d \n", i);

    float   f;
    f = 789.876;

    printf("%.1f \n", f);

    double  d;
    d = 789.876;

    printf("%.2lf \n", d);

    return(0);
}