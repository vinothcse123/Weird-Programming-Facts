#include<iostream>

int main()
{
   using namespace std;


   int rename_status = rename("test1","test2");

   printf("\n rename_status :: %d ", rename_status );


    rename_status = rename("test3","MY_DIR/test2");
   printf("\n rename_status :: %d ", rename_status );





   return 0;
}
