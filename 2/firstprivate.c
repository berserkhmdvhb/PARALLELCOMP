// If a is made firstprivate, then it is initialised with
// the value that it has before the parallel region:

// OpenMP header
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 10;
    int N = 5;
    int i;
    omp_set_num_threads(5);
    // use here shared and private clause in parallel construct
    // and try to understand how the shared and private clause behaves
    #pragma omp parallel for firstprivate(a) private(i)
    for(i = 0; i < N; i++)
    {
        a = i + 1;
        printf("value of a inside parallel region: %d\n", a);
    }
    printf("\n\n");
    printf("value of a after parallel region: %d\n", a);
    return 0;
}
