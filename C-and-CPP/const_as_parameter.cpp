#include<iostream>


void callme(const int i)
{
   printf("\n Called");
}
int main()
{
   using namespace std;

   const int i=10;

   callme(10);



   return 0;
}
