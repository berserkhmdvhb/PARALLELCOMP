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
        float cls = atof(argv[1]);
        float far = cls * 9/5 + 32;
        printf("Farenheit: %f\n", far);

    }
    else {
        printf("Usage: ./temp temperature\n");
        return 1;
    }
    return 0;
}


