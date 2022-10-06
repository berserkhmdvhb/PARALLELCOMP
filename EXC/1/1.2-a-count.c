#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    typedef uint8_t BYTE;
    // Line counter
    int count = 0;
    // Declare file pointer
    FILE* fp;
    // To store a character read from file
    char ch;

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

    // FIRST METHOD:
    // Extract characters from file and store in character c
    //for (c = getc(fp); c != EOF; c = getc(fp))
    //    if (c == '\n') // Increment count if this character is newline
    //        count = count + 1;

    // SECOND METHOD:
        while(!feof(fp))
    {
      ch = fgetc(fp);
      if(ch == '\n')
      {
        count++;
      }
    }


    // Close the file
    fclose(fp);
    printf("The file has %d lines\n", count);

}
