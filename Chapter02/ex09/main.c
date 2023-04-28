/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY *PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 09
*TOPIC: CALCULATE THE QUANTITY OF DAYS TO THE END OF THE YEAR.
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

    int   main(void)
{
    setlocale(LC_ALL, "en-US");

    int day;
    int month;
    int answer;

    printf("Digit day: ");
    scanf("%d", &day);

    printf("Digit month: ");
    scanf("%d", &month);

    answer = 30 - day;

    answer = answer + (12 - month) * 30;

    printf("Answer: %d \n", answer);

    return (0);
}