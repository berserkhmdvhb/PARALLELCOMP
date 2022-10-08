#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[])
{

    // Check for invalid usage
    if (argc == 2 && isalpha(*argv[1]))
    {
        char chr = tolower(*argv[1]);
        int flag = 0;
        char vowels[] = "aeiou";
        for (int i = 0; i < strlen(vowels); i++)
        {
            printf("%c\n", chr);
            if (vowels[i] == chr)
            {
                flag = 1;
                break;
            }

        }
        if (flag == 1)
        {
            printf("%c is a vowel\n", chr);
        }
        else
        {
            printf("%c is not a vowel", chr);
        }
    }
    else {
        printf("Usage: ./vowels alphabet\n");
    }
    return 0;
}


