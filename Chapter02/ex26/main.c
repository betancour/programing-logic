/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 26
*TOPIC: CALCULATE CAR TOTAL SPENDING AND TAXES.
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

float       calculateProductionCost(double taxFactory, double taxAgency, double totalCar)
{
    double taxAgencyMultiplier = 1 + (taxAgency / 100.0);
    double taxFactoryMultiplier = 1 + (taxFactory / 100.0);

    double productionCost = totalCar / (taxAgencyMultiplier * taxFactoryMultiplier);

    return productionCost;
}

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    double taxFactory = 10.0;
    double taxAgency = 5.0;
    double totalCar = 220000.0;

    printf("The production cost of the car is: $%.2f\n", calculateProductionCost(taxFactory, taxAgency, totalCar));

    return (0);
}
