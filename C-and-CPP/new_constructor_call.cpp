#include<iostream>
class test_class
{
   public:
   int a;
   test_class()
   {
      a=10;
   }
};

int main()
{
   using namespace std;

   test_class obj;
   printf("\n  :: %d ", obj.a );
   test_class *p_obj=new test_class;
   printf("\n  :: %d ", obj.a );
   return 0;
}
