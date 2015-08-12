/* deferecing pointer without pointing valid address */

#include<iostream>
#include "exploreme.h"

struct test
{
   
   char a[0];
   int al;
   float dl;
};

int main()
{
   struct test *t1=NULL;
   printf("\n  :: %d ", sizeof(*t1) ); 

   return 0;
}
