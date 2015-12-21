#include<iostream>

int callme(int i);


int main()
{
   using namespace std;

   callme(55);



   return 0;
}

int callme(int k=44)
{
   printf("\n  :: %d ", k );
}
