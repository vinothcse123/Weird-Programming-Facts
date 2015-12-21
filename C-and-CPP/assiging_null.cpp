#include<iostream>

int main()
{
   using namespace std;

   int *p,a;
   p=&a;
   printf("\n  :: %d ", *p );
   *p =NULL;
   printf("\n  :: %d ", *p );




   return 0;
}
