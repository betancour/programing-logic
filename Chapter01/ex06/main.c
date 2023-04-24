#if 0
//*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 07 / BASIC STAGE
TOPIC: FORMATING DATA OUTPUT, AND USING INPUT
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*//
#endif

#include <stdio.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    int     qtty1;
    int     qtty2;
    int     qtty3;

    // qtty1 = 10;
    // qtty2 = 100;
    // qtty3 = 1000;

    double      value1;
    double      value2;
    double      value3;

    // value1 = 10.50;
    // value2 = 100.50;
    // value3 = 1000.50;

    printf("Digit a value for variable qtty1: ");
    scanf("%d", &qtty1);
    printf("Digit a value for variable qtty2: ");
    scanf("%d", &qtty2);
    printf("Digit a value for variable qtty3: ");
    scanf("%d", &qtty3);
    printf("Digit a value for variable value1: ");
    scanf("%lf", &value1);
    printf("Digit a value for variable value2: ");
    scanf("%lf", &value2);
    printf("Digit a value for variable value3: ");
    scanf("%lf", &value3);

    printf("%4d %7.2lf \n", qtty1, value1);
    printf("%4d %7.2lf \n", qtty2, value2);
    printf("%4d %7.2lf \n", qtty3, value3);

    return(0);
}