#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    //typedef uint8_t BYTE;
    // Declare file pointer
    FILE* fp;
    // Declare counters
    int characters, words, lines;
    // To store a character read from file
    char ch;
    int x;
    // Check command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./count text\n");
        return 1;
    }

    // Open the raw file in reading mode
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    char str[100] = {'\0'};
    while ((ch = fgetc(fp)) != EOF)
    {
        if (isdigit(ch) != 0)
        {
            //printf("%c\n", ch);
            strncat(str, &ch, 1);
        }
    }
    printf("%s\n",str);
    // Close the file
    fclose(fp);
    return 0;
}


