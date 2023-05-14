
/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 21
*TOPIC: CALCULATE PROFIT AND INCOME TAX;
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

double      calculateInterestRate(double buyPrice, double sellPrice)
{
    return ((sellPrice / buyPrice) - 1) * 100;
}

double      calculateProfit(double buyPrice, double sellPrice, double rate)
{
    return (sellPrice - buyPrice) * (rate / 100);
}

int         main(void)
{
    setlocale(LC_ALL, "en-US");

    double      buyPrice = 500000.0;
    double      sellPrice = 600000.0;
    double      rate = 22.0;
    double      interestRate = calculateInterestRate(buyPrice, sellPrice);
    double      profit = calculateProfit(buyPrice, sellPrice, rate);

    printf("Interest Rate: %0.2lf%%\n", interestRate);
    printf("Profit: $%0.2lf\n", profit);

    return (0);
}
