#if 0
//*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 07 PART 2 / BASIC STAGE
TOPIC: FORMATING DATA OUTPUT, AND USING INPUT; ARITMETIC OPERATORS IN C
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*//
#endif

#include <stdio.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    int     a;
    int     b;

    int     add;
    int     substract;
    int     product;
    int     division;
    int     mod;

    a = 7;
    b = 2;

    add = a + b;
    substract = a - b;
    product = a * b;
    division = a / b;
    mod = a % b;

    printf("%d %d %d %d %d \n" , add, substract, product, division, mod);

    return (0);
}