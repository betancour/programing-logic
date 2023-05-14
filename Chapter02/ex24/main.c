/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 24
*TOPIC: CALCULATE A PAYROLL.
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

const double    SOCIAL_SECURITY_RATE = 0.08;
const double    INCOME_TAX_RATE = 0.15;
const double    TIME_OFF_RATE = 100.0;

double      calculateSocialSecurity(double payment)
{
    return payment * SOCIAL_SECURITY_RATE;
}

double      calculateIncomeTax(double payment)
{
    return payment * INCOME_TAX_RATE;
}

double      calculateTimeOff(int quantityTimeOff)
{
    return quantityTimeOff * TIME_OFF_RATE;
}

double      calculateLiquidPayment(double payment, int quantityTimeOff)
{
    double socialSecurity = calculateSocialSecurity(payment);
    double incomeTax = calculateIncomeTax(payment);
    double timeOff = calculateTimeOff(quantityTimeOff);
    return payment - socialSecurity - incomeTax - timeOff;
}

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    double payment = 5000.0;
    int quantityTimeOff = 1;

    double liquidPayment = calculateLiquidPayment(payment, quantityTimeOff);

    printf("Payment before deductions: %.2f\n", payment);
    printf("Social Security: %.2f\n", calculateSocialSecurity(payment));
    printf("Income Tax: %.2f\n", calculateIncomeTax(payment));
    printf("Time Off: %.2f\n", calculateTimeOff(quantityTimeOff));
    printf("Payment after deductions: %.2f\n", liquidPayment);

    return (0);
}
