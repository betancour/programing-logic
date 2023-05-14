/*
 *THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
 *FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.
 *
 *STUDENT NAME: YITZHAK B. SOLORZANO
 *EXERCISE: 23
 *TOPIC: CALCULATE A CIRCLE AREA;
 *ASSIGNMENT DATE: APRIL 30, 2023
 *DUE DATE: MAY 7, 2023
 */

#include <stdio.h>
#include <locale.h>

double     circleArea(double radius)
{
    const double    PI = 3.1415;
    return radius * radius * PI;
}

int        main(void)
{
    setlocale(LC_ALL, "en-US");

    printf("lf", circleArea(3.0));
}
