#include<iostream>

int main(int a,int b,int c)
{
   using namespace std;
   printf("\n\n11111111111111111111111111111111111  FUNCTION :: %s LINE :: %d \n",__FUNCTION__,__LINE__);



   return 0;
}

/* Error confused main
int main()
{
   printf("\n\n11111111111111111111111111111111111  FUNCTION :: %s LINE :: %d \n",__FUNCTION__,__LINE__);
   printf("\n22222222222222222222222222222222222222  FUNCTION :: %s LINE :: %d \n",__FUNCTION__,__LINE__);
}
*/
