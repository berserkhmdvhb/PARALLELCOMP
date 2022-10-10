#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
  int N=1000000;
  int *a=new int[N];
  int *b=new int[N];

  for(int i=0; i < N; i++)
    {
      a[i] = i;
      b[i] = i;
    }

  // measure time start
  // use here parallel construct, for and simd options to vectorize the for loop
  for(int i = 0; i < N; i++)
      {
	a[i] = a[i] + b[i];
      }
  // measure time end
  
  return 0;
}
