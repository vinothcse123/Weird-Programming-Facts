#include<iostream>

int main()
{
   using namespace std;
   int *i=NULL;
   printf("\n  :: %d ", i );  // *i will give core dump

   return 0;
}

