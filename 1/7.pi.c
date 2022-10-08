#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


// Function to calculate PI
double calculatePI(long int n)
{
    double sum=0.0, term, pi;
	// Add for 1000000 terms
    for(int i = 0; i < n; i++)
    {
        term = pow(-1, i) / (2 * i + 1);
        sum += term;
    }
    pi = 4 * sum;
	// Return the value of Pi
	return pi;
}

// Driver code
int main(int argc, char *argv[])
{
    // Check for invalid usage
    if (argc == 2 && isdigit(*argv[1]))
    {
	// Initialise sum=3, n=2, and sign=1
	double PI = 3, sign = 1;
	long int n = atol(argv[1]);

	// Function call
	printf("The approximation of Pi is %0.8lf\n", calculatePI(n));
	}
	else
    {
        printf("Usage: ./pi index\n");
    }
    return 0;
}


// Run as following: gcc -o pi pi.c -lm
