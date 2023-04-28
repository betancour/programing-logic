/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.

*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 13 RAMDOM OF PAIRS 
*TOPIC: CALCULATE THE QUANTITY OF DAYS TO THE END OF THE YEAR.
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    int     answer;
    int     a;
    int     b;

    a = 10;
    b = 20;

    srand(time(NULL));

    answer = a + rand() % (b + 1 - a);

        printf("%d\n", answer);

    return(0);
}