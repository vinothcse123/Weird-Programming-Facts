/* post or pre increment operator inside size of operator */
#include<iostream>
#include "exploreme.h"

int main()
{

   int x=10;
   
   printf("\n  sizeof :: %u ", sizeof( x++ ) );  

   printf("\n  x :: %d ", x ); 


   return 0;
}
