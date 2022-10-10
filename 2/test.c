// OpenMP program to print Hello World
// using C language

// OpenMP header
#include <omp.h>

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

	// Beginning of parallel region
	#pragma omp parallel
	{

		printf("Hello World... from thread id = %d\n", omp_get_thread_num());
        printf("from the team size = %d\n", omp_get_num_threads());

	}
	// Ending of parallel region
}

// Run via: gcc -fopenmp -o test test.c
