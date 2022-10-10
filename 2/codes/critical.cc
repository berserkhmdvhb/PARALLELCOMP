#include<iostream>
#include<omp.h>
using namespace std;
int main()
{
  int sum=0;
  int local_sum,n=10;
#pragma omp parallel num_threads(5) private(local_sum) 
  {
    for (int i=0; i <n; i++)
      local_sum += i;
#pragma omp critical
    {
      sum += local_sum;
    }
  }
  cout << "value of local sum is " << sum << endl;
  return 0;
}
