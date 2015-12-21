#include<iostream>

int main()
{
   using namespace std;

   int a[]={1,2,3,3,3,5,9};

   int traverse_id = 1;
   int index=0;

   while(1)
   {


      while( traverse_id != a[index])
      {
         index++;
      }

      traverse_id++;

      bool node_found = false;

      if(0 != index)
      {
         for(int j=index-1;j>=0 && !node_found ;j--)
         {
            for(int k=0 ; k<index && !node_found; k++)
            {
               if(a[k]+a[j] == traverse_id)
               {
                  traverse_id++;
                  node_found = true;
               }
            }
         }
      }

      if(!node_found)
      {
         printf("\n  :: %d ", traverse_id );
         break;
      }
   }

   return 0;
}





