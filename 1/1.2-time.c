#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
    // Check for invalid usage
    if (argc == 2 && isdigit(*argv[1]))
    {
        int days = atoi(argv[1]);
        int years = days / 365;
        int weeks = days / 7;
        int months = days / 30;
        printf("Number of years: %d", years);
        printf("\nNumber of weeks: %d", weeks);
        printf("\nNumber of months: %d\n", months);

    }
    else {
        printf("Usage: ./time days\n");
        return 1;
    }
    return 0;
}

