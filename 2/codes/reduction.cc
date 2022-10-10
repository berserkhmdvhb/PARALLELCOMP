#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
  int N = 100000;
  
  // use parallel construct and reduction clause to sum the array 
  
  for (int i = 0; i < N; i++)
    sum += i;

  return 0;
}



  
