#if 0
//*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 01 / BASIC STAGE
TOPIC: SUM THE QUANTITY OF FRUITS;
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*//
#endif

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "en-US");

    int     orange;
    int     pineaple;

    orange = 4;
    pineaple = 3;

    int     result;

    result = orange + pineaple;

    printf("The total of fruits is: %d\n", result);

    return(0);

}