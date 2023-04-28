/*
*THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
*FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR *SAULO SANTOS.
*
*STUDENT NAME: YITZHAK B. SOLORZANO
*EXERCISE: 12
*TOPIC: QUADRATIC EQUATIONS USING C
*ASSIGNMENT DATE: APRIL 30, 2023
*DUE DATE: MAY 7, 2023
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");
    double      a;
    double      b;
    double      c;
    double      delta;
    double      x1;
    double      x2;

    a = 21.0;
    b = 12.0;
    c = -14.0;

    delta = pow(b,2.0) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);

    printf("x1 = %4.1lf \nx2 =%4.1lf \n",x1,x2);

    return (0);
}
