#include<iostream>

int recursive_func(char *s)
{
   static int i=0;
   i++;
      printf("\n  :: %d ", i );
   if(i<5)
   recursive_func(s);
      printf("\n  ** %d ", i );

     return 0;
}


int main()
{
   using namespace std;
   char s[10]="HAI",*ss;
   ss="HIII";

   recursive_func(ss);

   return 0;
}
