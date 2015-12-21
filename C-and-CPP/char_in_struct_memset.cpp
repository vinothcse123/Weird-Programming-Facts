#include<iostream>

struct
{
   char c[10];
   int i;
}
test;
int main()
{
   using namespace std;

   test.i=10;
   strcpy(test.c,"HAI");
   printf("\n  :: %s ",test.c  );
   printf("\n  :: %d ", test.i );

   memset(&test,'\0',sizeof(test));


   printf("\n  :: %s ",test.c  );
   printf("\n  :: %d ", test.i );



   return 0;
}
