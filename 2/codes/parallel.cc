#include <iostream>
#include <omp.h>

using namespace std;

int main()
{

  // Create a parallel region using
  {
    cout << " Hello world from thread id "
         << //--get thread number--
          << " from the team size of "
         << //--get total number of threads--
          << endl;
  } 
  return 0;
}
