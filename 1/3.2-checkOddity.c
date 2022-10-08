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
        int num = atoi(argv[1]);
        // leap year if perfectly divisible by 400
        if (num % 2 == 0) {
            printf("%d is an even number.", num);
        }
        else {
            printf("%d is an odd number.", num);
        }
    }
    else {
        printf("Usage: ./checkOddity number\n");
    }
    return 0;
}


