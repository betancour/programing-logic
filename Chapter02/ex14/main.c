/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 14 PASSING PARAMETERS BY VALUE IN C;
*TOPIC: CALCULATE THE QUANTITY OF DAYS TO THE END OF THE YEAR.
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

int     add(int x, int y)
{
    return x + y;
}

#include <stdio.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    int     a;

    a = add(10, 11);

    printf("Add: %d\n", a);

    return (0);
}