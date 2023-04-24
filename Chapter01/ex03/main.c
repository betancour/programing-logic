#if 0
//*
THIS IS A FILE THAT BELONGS TO THE LIST OF EXERCISES
FOR LEARNING C LANGUAGE ON THE COURSE PROGRAMMING LOGIC MANAGED BY PROFESSOR SAULO SANTOS.

STUDENT NAME: YITZHAK B. SOLORZANO
EXERCISE: 04 / BASIC STAGE
TOPIC: ON THIS EXERCISE PROFESSOR SAULO EXPLAINED THE DATATYPES;
ASSIGNMENT DATE: APRIL 30, 2023
DUE DATE: MAY 7, 2023

*********** LIST OF DATA TYPES  ****************************************


char:

Size: 1 byte
Range: -128 to 127
Format specifier: %c (for character) or %d (for integer)

unsigned char:

Size: 1 byte
Range: 0 to 255
Format specifier: %c (for character) or %u (for unsigned integer)

short int:

Size: 2 bytes
Range: -32,768 to 32,767
Format specifier: %d (for integer)

unsigned short int:

Size: 2 bytes
Range: 0 to 65,535
Format specifier: %u (for unsigned integer)

int:

Size: 4 bytes
Range: -2,147,483,648 to 2,147,483,647
Format specifier: %d (for integer)

unsigned int:

Size: 4 bytes
Range: 0 to 4,294,967,295
Format specifier: %u (for unsigned integer)

long int:

Size: 4 bytes (32-bit) or 8 bytes (64-bit)
Range: -2,147,483,648 to 2,147,483,647 (32-bit) or -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (64-bit)
Format specifier: %ld (for long integer)

unsigned long int:

Size: 4 bytes (32-bit) or 8 bytes (64-bit)
Range: 0 to 4,294,967,295 (32-bit) or 0 to 18,446,744,073,709,551,615 (64-bit)
Format specifier: %lu (for unsigned long integer)

long long int:

Size: 8 bytes
Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
Format specifier: %lld (for long long integer)

unsigned long long int:

Size: 8 bytes
Range: 0 to 18,446,744,073,709,551,615
Format specifier: %llu (for unsigned long long integer)

float:

Size: 4 bytes
Range: +/- 3.4e-38 to +/- 3.4e38
Format specifier: %f (for float)

double:

Size: 8 bytes
Range: +/- 1.7e-308 to +/- 1.7e308
Format specifier: %lf (for double)

long double:

Size: 8 bytes (32-bit) or 16 bytes (64-bit)
Range: +/- 3.4e-4932 to +/- 3.4e4932 (32-bit) or +/- 1.1e-4932 to +/- 1.1e4932 (64-bit)
Format specifier: %Lf (for long double)


*//
#endif

#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "en-US");
    return (0);
}