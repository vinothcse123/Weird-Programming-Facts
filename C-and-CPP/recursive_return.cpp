#include<iostream>

int callme()
{
   static int i=0;
   printf("\n IN  :: %d ", i );
   i++;
   while(i<5)
   {
      callme();
      if(i==1)
         return i;

   }
   printf("\n:: %d ", i );

}
int main()
{
   using namespace std;
   printf("\n Final :: %d ", callme() ); // Unexpected behaviour
   return 0;
}
