#include<iostream>


class outer
{
   public:
      int pub;
      int pub_func();
      class inner
      {
         private:
            int in_pri;
         public:
            int in_pub;
      };

   private:
      int pri;

};

int outer  :: pub_func()
{

   return 0;
}

int main()
{
   using namespace std;

   outer out;
   //   out.in_pri=10; Inner class is not visible to outer class object
   //   out.inner::in_pub=15; Inner class is not visible to outer class object

   outer::inner in;
   //  in.pub=10;  Cannot access the outer class with the inner class
   //  in.pri=10;  Cannot access the outer class with the inner class
   return 0;
}

