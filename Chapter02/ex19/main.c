/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 19
*TOPIC: STOCK MARKET SIMULATION;
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <locale.h>

double updateBid(double stockHolded, double bidPrice, double buyStock, double priceBuy)
{
    return (stockHolded * bidPrice + buyStock * priceBuy) / (stockHolded + buyStock);
}

int updateQuantity(int stockHolded, int buyStock)
{
    return stockHolded + buyStock;
}

double calculateGrossProfit(double sellPrice, double buyPrice, int quantity)
{
    return (sellPrice - buyPrice) * quantity;
}

double calculateLiquidProfit(double sellPrice, double buyPrice, int quantity, double incomeTax)
{
    double grossProfit = calculateGrossProfit(sellPrice, buyPrice, quantity);
    double netProfit = grossProfit - calculateIncomeTax(grossProfit, incomeTax);
    return netProfit;
}

double calculateIncomeTax(double grossProfit, double tax)
{
    return grossProfit * (tax / 100);
}

int main(void)
{
    setlocale(LC_ALL, "en-US");

    double bonds;
    double bidPrice;
    double grossProfit;
    double liquidProfit;
    double incomeTax;
    double sellPrice;
    double buyPrice;
    int stockHolded;
    int buyStock;
    int quantity;

    stockHolded = updateQuantity(stockHolded, buyStock);
    bidPrice = updateBid(stockHolded, bidPrice, buyStock, buyPrice);
    grossProfit = calculateGrossProfit(sellPrice, buyPrice, quantity);
    liquidProfit = calculateLiquidProfit(sellPrice, buyPrice, quantity, incomeTax);

    printf("Gross Profit: $%.2lf\n", grossProfit);
    printf("Liquid Profit: $%.2lf\n", liquidProfit);
    printf("Income Tax paid: $%.2lf\n", calculateIncomeTax(grossProfit, incomeTax));

    return(0);
}
