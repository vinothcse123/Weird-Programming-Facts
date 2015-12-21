#include<iostream>


void default_parameter(int a=10)
{
   printf("\n  :: %d ", a );
}
int main()
{
   using namespace std;
   default_parameter();
   default_parameter(45);



   return 0;
}
