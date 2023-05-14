/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 20
*TOPIC: INVESTING ON FINANTIAL STOCKS
*ASSIGNMENT DATE: MAY 3, 2023
*DUE DATE: MAY 20, 2023
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

double      investment(double capital, double rate, int period)
{
    return capital * pow((1 + rate / 100), period);
}

int         main(void)
{
    setlocale(LC_ALL, "en-US");

    double      capital;
    double      rate;
    double      amount;
    int         period;

    capital = 1000.0;
    rate = 3.0;
    period = 5;

    amount = investment(capital, rate, period);

    printf("Amount US$: %.2lf\n", amount);

    return 0;
}
