#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
  int n=3;
  omp_set_num_threads(n);
  int var = 5;
cout << "initial var value " << var <<endl;
#pragma omp parallel
 {
#pragma omp for lastprivate(var)
   for(int i = 0; i < n; i++)
     {
       var += omp_get_thread_num();
       cout << " lastprivate in parallel region " << var << endl;
     }
 }
 cout << "lastprivate after parallel region " << var <<endl;
 return 0;
}
 
