/* arrayending by assinging zero to one char */

#include<iostream>

int main()
{
   char s[]={'a',0,0,0,0,0};
   printf("\n  :: %s ",s  );
   printf("\n  :: %d ", sizeof(s) );
   printf("\n  :: %d ", strlen(s) );

   return 0;
}
