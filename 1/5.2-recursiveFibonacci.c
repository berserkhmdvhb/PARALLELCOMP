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
        long int fibbo(int n)
        {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else
            return (fibbo(n - 1) + fibbo(n - 2));
        }
        printf("%ld\n", fibbo(num));
    }
    else
    {
        printf("Usage: ./fibonacci number\n");
    }
    return 0;
}

