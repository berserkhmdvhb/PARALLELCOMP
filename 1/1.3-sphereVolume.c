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

    float Pow(float x,float n)
{
    float i; /* Variable used in loop counter */
    float number = 1;

    for (i = 0; i < n; ++i)
        number *= x;

    return(number);
}


        float radius = atof(argv[1]);
        float V = (float) 4/3 * M_PI * Pow(radius, 3);
        printf("%f\n", Pow(radius,3));
        printf("%f\n", V);

    }
    else {
        printf("Usage: ./sphereVolume radius\n");
        return 1;
    }
    return 0;
}

