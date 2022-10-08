#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    //typedef uint8_t BYTE;
    // Declare file pointer
    FILE* fp;
    // Declare counters
    int characters, words, lines;
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

    // FIRST METHOD FOR COUNTING LINES:
    // Extract characters from file and store in character c
    //for (c = getc(fp); c != EOF; c = getc(fp))
    //    if (c == '\n') // Increment count if this character is newline
    //        count = count + 1;

    // Logic to count characters, words and lines.
    characters = words = lines = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        lines++;
    }

    // Close the file
    fclose(fp);
    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    return 0;

}
