/* What is the use of including istream and  ostream header eventhough iostream header is included? */

#include<iostream>
#include <istream>
#include <ostream>


int main()
{
   int a;
   std::cin >> a;
   std::cout<< a;

   return 0;
}
