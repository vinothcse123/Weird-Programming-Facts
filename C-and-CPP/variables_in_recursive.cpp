#include<iostream>

int main()
{
   using namespace std;

   static int i=0;

   printf("\n ADDED :: %d ", i++ );

   while(i<5)
   {
      main();
   }

   printf("\n  REMOVED:: %d ", i );



   return 0;
}
