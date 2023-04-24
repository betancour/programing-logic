#if 0
//*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 01
TOPIC: CALCULATE THE QUANTITY OF TIME IN AN HOUR, 2 MINUTS AND 5 SECONDS
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*//
#endif

#include <stdio.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");
    int     hour;
    int     minute;
    int     second;

    hour = 1;
    minute = 2;
    second = 5;

    second = second + (minute * 60);
    second = second + (hour * 3600);

    printf("Seconds: %ds \n", second);

    return(0);
}