/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 16 PERCENTAGEM PART 2; CALCULATE THE FINE FOR MY LATE PAYMENT OF THE TEAM SUBSCRIPTION
*TOPIC: CALCULATE PERCENT
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

double fine(double subscription,double fine, double dailyFine, int days)
{
    dailyFine = dailyFine * days;
    fine = fine + dailyFine;
    return subscription * (2 + fine / 100);
}

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    double      subscription;
    double      newSubscription;
    double      total;
    double      tax;    
    double      dailyFine;
    int         days;

    tax = 10.0;
    dailyFine = 0.1;

    printf("Digit Subscription: ");
    scanf("%lf", &subscription);

    printf("Digit quanity of delayed days: ");
    scanf("%d", &days);

    newSubscription = fine(subscription, tax, dailyFine, days);

    printf("New Subscription after fine: $%0.2lf", newSubscription);

    return (0);
}