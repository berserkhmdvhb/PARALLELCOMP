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
        long int multNums(int n)
        {
        if (n >= 1)
            return n * multNums(n-1);
        else
            return 1;
        }
        printf("%ld\n", multNums(num));
    }
    else
    {
        printf("Usage: ./factorize number\n");
    }
    return 0;
}

