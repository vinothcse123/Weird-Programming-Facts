#include<iostream>

class class_test
{
   public:
      int a;
      class_test()
      {
         printf("\n\n11111111111111111111111111111111111  FUNCTION :: %s LINE :: %d \n",__FUNCTION__,__LINE__);
      }
};

int main()
{
   using namespace std;

  class_test c=class_test();
  c.a=10;

   return 0;
}
