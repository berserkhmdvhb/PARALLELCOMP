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
        for (int i = 1; i <= (num / 2); ++i)
        {
            if (num % i == 0) {
                printf("%d ", i);
            }
        }
        printf("%d ", num);
    }
    else {
        printf("Usage: ./factorize number\n");
    }
    return 0;
}


