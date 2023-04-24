#if 0
//*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 10
TOPIC: CALCULATE SQRT(X); USING THE MATH LIBRARY
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*//
#endif

#include <stdio.h>
#include <locale.h>
#include <math.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    double      sqrt1;
    double      pow1;
    double      trunc1;
    double      mod1;

    // SQRT(X)
    sqrt1 = sqrt(25.0);

    // POW(X)
    pow1 = pow(2,3);

    // TRUNC(X)
    trunc1 = trunc(34.999);

    // MODULUS(X) & DIVISION(X)
    mod1 = fmod(5.0, 2.0);

    printf("Square root: %lf\n",sqrt1);
    printf("Power of: %lf\n", pow1);
    printf("Trunc of:  %lf\n", trunc1);
    printf("Modulus of: %lf\n",mod1);

    return(0);
}