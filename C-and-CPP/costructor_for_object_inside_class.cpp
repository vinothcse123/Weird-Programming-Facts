#include<iostream>

class Buyer
{
   int m_Buyer_id;

   public:
   Buyer()
   {
      printf("\nBuyer class constructor: no parameter!");
   }

   Buyer(int id)
   {
      printf("\nBuyer class constructor: single parameter!");
      printf("\n Random value received  Becuase this is called first:: %d ", id  );
   }
   Buyer(int id,int dummy)
   {
      printf("\nBuyer class constructor: two parameter!");
      printf("\n ID :: %d ", id  );
   }
};
