#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
  int a=10;
  int N = 5;
  int i;
  omp_set_num_threads(5);
  // use here shared and private clause in parallel construct
  // and try to understand how the shared and private clause behaves
#pragma omp parallel for firstprivate(a) private(i)
    a++;
    for(i = 0; i < N; i++)
      {
        a = i + 1;
        cout << "value of a with each thread "<< a << endl;
      }
  cout << "value of a "<< a << endl;
  return 0;
}
