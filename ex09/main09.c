#include <stdio.h>
#include <locale.h>

int     main(void)
{
    setlocale(LC_ALL, "en-US");

    int     day;
    int     month;
    int     answer;

    printf("Digit the quantity of Days: ");
    scanf("%d", &day);

    printf("Digit the Month: ");
    scanf("%d", &month);

    answer = 30 - day;
    answer = answer +  (12 - month)*30;

    return (0);

}
