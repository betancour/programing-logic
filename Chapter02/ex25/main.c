/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 25
*TOPIC: CALCULATE THE VOLUME MILK BOTLE BOX
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/
#include <stdio.h>
#include <locale.h>

double      boxDimensions(double x, double y, double z)
{
    return (x * y * z) / 1000.0;
}

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    double x, y, z;

    printf("Type the value for x dimension in centimeters: ");
    scanf("%lf", &x);

    printf("Type the value for y dimension in centimeters: ");
    scanf("%lf", &y);

    printf("Type the value for z dimension in centimeters: ");
    scanf("%lf", &z);

    printf("Total volume in milliliters = %.1lf\n", boxDimensions(x, y, z));
    return (0);
}
