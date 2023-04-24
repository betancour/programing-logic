#if 0
//*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 11
TOPIC: CALCULATE SPENT TIME FROM ONE CITY TO ANOTHER, USING MATH LIBRARY.
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*//
#endif

#include <stdio.h>
#include <math.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    double      meanSpeed;
    double      departureTime;
    double      distance;
    double      spentTime;
    double      minute;

    meanSpeed = 85.00;
    distance =  649.0;
    departureTime = 13.0;

    spentTime = distance/meanSpeed;
    minute = spentTime - trunc(spentTime);
    spentTime = spentTime - minute + departureTime;
    minute = 60 * minute;

    printf("Answer is equal to %0.0f hours and %0.0lf minutes\n", spentTime, minute);

    return(0);

}