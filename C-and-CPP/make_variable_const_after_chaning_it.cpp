#include<iostream>


int make_const(int i)
{
   i=i*41;
   return i;
}
int main()
{
   using namespace std;
   const int i=make_const(10);




   return 0;
}

