#if 0
/*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 08
TOPIC: CALCULATE THE QUANTITY OF DAYS TO THE END OF THE YEAR.
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*/
#endif

#include <stdio.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    int     hour;
    int     minute;
    int     seccond;

    hour = 1;
    minute = 2;
    seccond = 5;

    seccond = seccond + (minute * 60);
    seccond = seccond + (hour * 3600);

    printf("Secconds: %ds \n", seccond); 

    return (0);
}