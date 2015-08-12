/* get First Two Digit In Integer */


int getFirstTwoDigitInInteger(int value)
{

  return  floor( ( value/ ( pow(10,(floor(log10(value))-1)) ))  );
}

int main()
{

   printf("\n  :: %d ", getFirstTwoDigitInInteger(1945512) ); 

   return 0;
}
