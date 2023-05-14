
/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 18
*TOPIC: CALCULATE THE INCOME TAX, SHEEP BREEDER PROBLEM
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

double      incomeTax(double answer, double tax)
{
    return answer * 1 - tax / 100;

}

int         main(void)
{
    setlocale(LC_ALL, "en-US");

    double      kg;
    double      dollar;
    double      real;
    double      tax;
    double      answer;
    int         quantity;


    kg = 4.0;
    dollar = 3.0;
    real = 5.0;
    tax = 15.0;
    quantity = 4500;

    answer = quantity * kg;
    answer = answer * dollar;
    answer = answer * real;
    answer = incomeTax(answer, tax);


    printf("Answer = R$ %.2lf\n", answer);
    printf("Answer = R$ %.2lf\n", answer);
    printf("Answer = R$ %.2lf\n", answer);
    printf("Answer = R$ %.2lf\n", answer);
    printf("Answer = R$ %.2lf\n", answer);
}
