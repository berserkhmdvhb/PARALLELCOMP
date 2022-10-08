#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
    int size = 5;
    double* ar1 = (double*)malloc(size * sizeof(double));
    double* ar2 = (double*)malloc(size * sizeof(double));
    if (ar1 == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    if (ar2 == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d of array 1: ", i + 1);
        scanf("%lf", &ar1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d of array 2: ", i + 1);
        scanf("%lf", &ar2[i]);
    }
    // vector dot product
    double vectors_dot_prod(const double *vec1, const double *vec2, int n)
    {
        double product = 0;
        // Loop for calculate dot product
        for (int i = 0; i < n; i++)
            product = product + vec1[i] * vec2[i];
        return product;
    }
    // vector multiplication
    double* vectors_add(const double *vec1, const double *vec2, int n)
    {
        double* add = (double*)malloc(size * sizeof(double));
        // Loop for calculate dot product
        for (int i = 0; i < n; i++)
            add[i] =  vec1[i] + vec2[i];
        return add;
    }
    printf("vectors' dot product: %lf\n", vectors_dot_prod(ar1, ar2, size));
    printf("addition vector's elements: \n");
    for (int i = 0; i < size; i++)
        printf("%lf ", vectors_add(ar1, ar2, size)[i]);
    return 0;
}




