#include<iostream>
#include <cmath>

int main()
{
   using namespace std;

   try
   {
      //   int i=1/0; This is gives the Arithmetic execption but cannot be captured

      printf("\n 1.0/0 :: %d ", isnan(1.0/0) );
      printf("\n 0.0/0  :: %d ", isnan(0.0/0) );

   }
   catch(int i)
   {
      printf("\n Exception will not be thrown for the divide by Zero!" );
   }

   return 0;
}
