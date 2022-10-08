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
        int year = atoi(argv[1]);
        // leap year if perfectly divisible by 400
        if (year % 400 == 0) {
          printf("%d is a leap year.", year);
        }
        // not a leap year if divisible by 100
        // but not divisible by 400
        else if (year % 100 == 0) {
          printf("%d is not a leap year.", year);
        }
        // leap year if not divisible by 100
        // but divisible by 4
        else if (year % 4 == 0) {
          printf("%d is a leap year.", year);
        }
        // all other years are not leap years
        else {
          printf("%d is not a leap year.", year);
        }
    }
        else {
            printf("Usage: ./leapYear year\n");
        return 1;
    }
    return 0;
}


