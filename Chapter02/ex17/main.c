/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 17
*TOPIC: CALCULATE TIPS AND PERCENTAGE OF TIP.
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

double taxes(double total, double tax) {
    return total * tax /100;
}

int     main(void)
{
    setlocale(LC_ALL, "en-US");
    double      total;
    double      tax;
    double      tip;
    double      artistCovert;
    double      totalTip;
    double      finalTotal;

    total = 100.0;
    artistCovert = 2.0;
    tip = 10.0;

    artistCovert = taxes(total, artistCovert);
    totalTip = taxes(total, tip);
    finalTotal = total + artistCovert + totalTip;

    printf("Artist Covert: $ %6.2lf\n", artistCovert);
    printf("Tip: $ %6.2lf\n", totalTip);
    printf("Total: $ %6.2lf\n", total);
    printf("Grand Total: $ %6.2lf\n", finalTotal);

    return (0);
}