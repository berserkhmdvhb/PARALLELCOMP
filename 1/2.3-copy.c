#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    //typedef uint8_t BYTE;
    // Declare file pointers
    FILE *fptr1, *fptr2;
    // To store a character read from file
    char c;

    // Check command-line arguments
    if (argc != 3)
    {
        printf("Usage: ./copy sourceFile destinationFile\n");
        return 1;
    }

    // Open the raw file in reading mode
    fptr1 = fopen(argv[1], "r");
    if (fptr1 == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
	// Open another file for writing
	fptr2 = fopen(argv[2], "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", argv[2]);
		exit(0);
	}

	// Read contents from file
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s\n", argv[2]);

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
