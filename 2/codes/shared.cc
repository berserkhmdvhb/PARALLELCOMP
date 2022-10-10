#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
  int N = 5;
  int *a = new int[N];

  // array initialization
  for(int i = 0; i < N; i++)
    a[i] = i;

  // use here shared and private declaration of a
  // and try to understand how the shared and private clause behaves
#pragma omp parallel num_threads(5) private(a)
  {
    #pragma omp for
    for(int i = 0; i < N; i++)
      a[i] += i;
  }
  
  for(int i = 0; i < N; i++)
    cout << "value of a[i] is " << a[i] <<endl;
  
  return 0;
}
