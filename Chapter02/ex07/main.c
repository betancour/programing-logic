/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 07
*TOPIC: CALCULATE ARITMETIC MEAN
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
    int     c;

    float   mean;

    a = 11;
    b = 11;
    c = 12;

    // IN C LANGUAGE MATH OPERATIONS HAVE ORDER OF PRECEDENCE 
    // WHICH MEAN THAT SOME OPERATIONS ARE EVALUATED BEFORE OTHERS
    // THE ORDER OF PRECEDENCE IS THE FOLLOW:
    // PARENTHESES; ARE ALWAYS EVALUATED FIRST
    // MULTIPLICATION AND DIVISION ON SECOND
    // ADDITION AND SUBSTRACTION IS ALWAYS LAST.

    // mean = (a + b + c) / 3.0; 
    mean = (float)(a + b + c) / 3;

    printf("Mean: %f \n", mean); 

    return (0);
}