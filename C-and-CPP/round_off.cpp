#include<iostream>
#include <cmath>

int main()
{
   using namespace std;

   float f=1.44224444453;

   float res=round(f);

   printf("\n  :: %f ",res  );

   /* Round off to two digits */

   float res_2digits = round(f*100)/100.0;

   printf("\n 2 digits :: %f ", res_2digits );



   return 0;

}
