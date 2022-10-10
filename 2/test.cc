#include <iostream>
#include <omp.h>
using namespace std;
int main()
{
#pragma omp parallel //*-- create a parallel region "Fork" --*//
{
cout << " Hello world from thread id "
<< omp_get_thread_num()
<< " from the team size of "
<< omp_get_num_threads()
<< endl;
} //*-- parallel region is closed "Join" --*//
return 0;
cout << "end of the program from master thread" << endl;
}
