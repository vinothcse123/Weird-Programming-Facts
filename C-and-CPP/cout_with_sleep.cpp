#include<iostream>

int main()
{
   using namespace std;

// Test 1 :: without new line
for(int i=0;i<5;i++)
{
   sleep(2);
   cout<<"*";
}

cout<<"\n";

// Test 2 :: with new line
for(int i=0;i<5;i++)
{
   sleep(2);
   cout<<"#\n";
}
   return 0;
}
