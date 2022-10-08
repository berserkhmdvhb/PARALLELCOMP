#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
    // Check for invalid usage
    char *ptr = argv[1];
    if (argc == 2)
    {
    int len = 0;
    while (ptr[len] != '\0')
    {
        len++;
    }
    printf("%i\n",len);

    }
    else
    {
        printf("Usage: ./stringLen string\n");
        return 1;
    }


    return 0;
}

