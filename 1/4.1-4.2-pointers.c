#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main()
{
    char str[10];
    int num = 10;
    int *numptr = &num;
    // Initialize pointers
    printf("Adress of first element of array: %p\n", &str);
    printf("Adress of first element of array: %p\n", &str[0]);
    printf("Adress of second element of array: %p\n", &str[1]);
    printf("Adress of third element of array: %p\n", &str[2]);
    printf("Address of num: %p\n", &num);
    printf("pointer numptr: %p\n", numptr);
    printf("Address of pointer numptr: %p\n", &numptr);
    printf("Value of pointer numptr: %d\n\n", *numptr);
    // Understand double pointers
    printf("Double Pointers\n\n");
    int *ptr = &num;
    int **doubleptr = &ptr;
    printf("Value of num: %d\n", num);
    printf("Value of var using sinle pointer: %d\n", *ptr);
    printf("Value of var using double pointers: %d\n", **doubleptr);
    printf("Value of single pointer: %p\n", ptr);
    printf("Value of double pointer: %p\n", doubleptr);
    printf("Adress of single pointer: %p\n", &ptr);
    printf("Address of double pointer: %p\n", &doubleptr);
    return 0;
}


