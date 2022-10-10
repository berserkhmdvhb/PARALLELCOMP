#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
  // set 4 OpenMP threads
  //  omp_set_num_threads(3);
  
  // for private varibale test
  int var = 5;
  
#pragma omp parallel firstprivate(var) num_threads(3)
  {
    var += omp_get_thread_num();
    cout << " firstprivate variable within the parallel region " << var << endl;
  }
  cout << "first private varibale after the parallel region " << var <<endl;
  return 0;
}
