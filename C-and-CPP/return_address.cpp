#include<iostream>

int* test(int *i)
{

   printf("\n  :: %d ", i );
   return i;
}

int main()
{
   using namespace std;
   int *i;
   test(i);
   printf("\n  :: %d ",  i);

   return 0;
}
